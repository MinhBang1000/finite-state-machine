#include <array>
#include <iostream>

enum LightState {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3
};

std::array<LightState, 4> states {
    LightState::Off, 
    LightState::Low,
    LightState::Medium,
    LightState::High
};

LightState state = states[0];

void toggle() {
    std::cout << "The current state is " << state << std::endl;
    state = states[(state + 1) % 4];
}

int main() {
    toggle();
    toggle();
    toggle();
    toggle();
    toggle();
    return 0;
}

/** 
 *  HOW TO COMPILE THOSE LINES OF CODE
 *      g++ -c ArrayEnums.cpp 
 *      g++ ArrayEnums.o -o output
 *      ./output
*/