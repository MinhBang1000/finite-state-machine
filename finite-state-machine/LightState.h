#pragma once
#include "Light.h"

class Light;

// = 0 doesn't mean assign zero value for the function. It is a syntax to declare which is a pure virtual function that need to implement by the derived class.

class LightState {
	public: 
		virtual void enter(Light* light) = 0;
		virtual void toggle(Light* light) = 0;
		virtual void exit(Light* light) = 0;
		// make the destructor virtual in a base class, especially if your class has virtual functions1. This allows the correct derived class�s destructor to be called when an object is deleted through a base pointer
		virtual ~LightState() {};
};
