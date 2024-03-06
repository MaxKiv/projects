#include "State.h"
#include "Context.h"

class InitializationState : public State {
public:
    void enter(Context& context) override;

    void execute(Context& context) override;

    void exit(Context& context) override;
};
