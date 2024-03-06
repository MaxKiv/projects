#include "Context.h"

#include "CommunicationState.h"
#include "ErrorState.h"

void Context::setState(std::unique_ptr<State> newState) {
  currentState = std::move(newState);
  currentState->enter(*this);
}

void Context::execute() {
  if (currentState) {
    currentState->execute(*this);
  }
}

void Context::transitionTo(std::unique_ptr<State> newState) {
  currentState->exit(*this);
  setState(std::move(newState));
}

void Context::notifyExternalResponse(bool response) {
  // Notification from external unit
  std::cout << "External response received: " << response << std::endl;
  // For the sake of example, just transition to the next state based on the
  // response
  if (response) {
    transitionTo(std::make_unique<CommunicationState>());
  } else {
    transitionTo(std::make_unique<ErrorState>());
  }
}
