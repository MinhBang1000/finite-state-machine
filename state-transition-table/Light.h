#pragma once
#include <iostream>
#include "LightState.h"

class Light {
    public:
        Light() {};
        void toggle() {

            // Before 
            // switch (this->currentState) {
            //     case LightState::Off:
            //         break;
            //     case LightState::Low:
            //         break;
            //     // etc.
            // }

            std::cout << "The current state is " << this->currentState << std::endl;
            this->currentState = lightStates[this->currentState];
        
            // After
            // switch (this->currentState) {
            //     case LightState::Off:
            //         break;
            //     case LightState::Low:
            //         break;
            //     // etc.
            // }
        };

    private: 
        LightState currentState = LightState::Off;
};

/**
 *  WHY STATE TRANSITION TABLE IS LIMITED ?
 *  Checking each condition if you want to do any thing before and after the toggling ?
 *  --> For example above --> If you augmet the numer of state, you have to set a lot of conditions here.
 * 
*/