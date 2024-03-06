#include <thread>

#include "InitializationState.h"

void InitializationState::enter(Context &context) {
  std::cout << "InitializationState: Start initialization process\n";
  std::thread t([this, &context]() {
    std::this_thread::sleep_for(std::chrono::milliseconds(800)); // Simulate some work
    context.notifyExternalResponse(true);                 // Simulate success
  });
  t.detach(); // Detach the thread
}

void InitializationState::execute(Context &context) {
  // Simulate asynchronous initialization
  std::cout << "InitializationState: Execute\n";

}

void InitializationState::exit(Context &context) {
  // Cleanup if needed
  std::cout << "Exiting InitializationState...\n";
}
