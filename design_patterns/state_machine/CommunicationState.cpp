#include <iostream>
#include <thread>
#include <random>

#include "CommunicationState.h"
#include "ErrorState.h"
#include "InitializationState.h"

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> dis(0, 1); // Range [0, 1)

constexpr double branchPercentage = 0.89;

void CommunicationState::enter(Context &context) {
  std::cout << "Communicating...\n";
}

static constexpr size_t duration = 10;
static size_t cnt = 0;
void CommunicationState::execute(Context &context) {
  std::thread t([this, &context]() {
    auto delay = static_cast<int>(dis(gen) * 10000);
    std::cout << "CommunicationState: delay " << delay << "\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(delay)); // Simulate some work

    if(!responseReceived) {
      responseReceived = true;
      if(dis(gen) > branchPercentage) {
        std::cout << "CommunicationState: Branching to InitializationState\n";
        context.transitionTo(std::make_unique<InitializationState>());
      } else {
        std::cout << "CommunicationState: Branching to ErrorState\n";
        context.transitionTo(std::make_unique<ErrorState>());
      }
    }
  });
  t.detach(); // Detach the thread

  std::cout << "CommunicationState: waiting\n";

}

void CommunicationState::exit(Context &context) {
  // Cleanup if needed
}
