#pragma once
#include <memory>

class State;

class Context {
private:
    std::unique_ptr<State> currentState;

public:
    void setState(std::unique_ptr<State> newState);

    void execute();

    void transitionTo(std::unique_ptr<State> newState);

    void notifyExternalResponse(bool response);
};
