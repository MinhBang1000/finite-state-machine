#pragma once
#include "LightState.h"

// Forward declaration to resolve circular dependency/include
class LightState;

class Light
{
	public:
		Light();
		// Just copy and insert into the compiling code segment.
		inline LightState* getCurrentState() const { return currentState; }
		void toggle();
		// This is where the magic happens
		void setState(LightState& newState);

	private:
		LightState* currentState;
};

