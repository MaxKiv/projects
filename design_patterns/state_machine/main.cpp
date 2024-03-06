#include <thread>
#include "Context.h"
#include "InitializationState.h"

int main() {
    Context context;
    context.setState(std::make_unique<InitializationState>());

    // Simulate some continuous execution
    for (int i = 0; i < 60; ++i) {
        context.execute();
        std::this_thread::sleep_for(std::chrono::milliseconds(1000)); // Simulate some work
    }

    return 0;
}

