#pragma once

#include "State.h"

class ErrorState : public State {
public:
    void enter(Context& context) override;

    void execute(Context& context) override;

    void exit(Context& context) override;
};
