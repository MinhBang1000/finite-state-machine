#pragma once
#include <map>
#include <string>

enum LightState {
    Off = 0,
    Low = 1,
    Medium = 2,
    High = 3
};

std::map<LightState, LightState> lightStates {
    {LightState::Off, LightState::Low},
    {LightState::Low, LightState::Medium},
    {LightState::Medium, LightState::High},
    {LightState::High, LightState::Off}
};