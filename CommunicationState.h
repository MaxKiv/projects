#pragma once

#include "State.h"
#include "Context.h"

class CommunicationState : public State {
public:
    void enter(Context& context) override;

    void execute(Context& context) override;

    void exit(Context& context) override;

  private:
  bool responseReceived = false;
};
