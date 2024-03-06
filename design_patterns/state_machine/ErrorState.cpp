#include "ErrorState.h"
#include "InitializationState.h"
#include <iostream>
#include <memory>

void ErrorState::enter(Context &context) {
  std::cout << "Error occurred...\n";
}

void ErrorState::execute(Context &context) {
  // State doesn't require continuous execution
  context.transitionTo(std::make_unique<InitializationState>());
}

void ErrorState::exit(Context &context) {
  // Cleanup if needed
}
