#pragma once

#include <iostream>
#include <functional>

class Context;

class State {
public:
    virtual void enter(Context& context) = 0;
    virtual void execute(Context& context) = 0;
    virtual void exit(Context& context) = 0;
    virtual ~State() = default;
};
