#pragma once
#include <iostream>
#include "LightState.h"
#include "Light.h"

class LightOff : public LightState
{
public:
	void enter(Light* light) {
		std::cout << "Light Off" << std::endl;
	}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();

private:
	LightOff() {}
	LightOff(const LightOff& other);
	LightOff& operator=(const LightOff& other);
};

class LowIntensity : public LightState
{
public:
	void enter(Light* light) {
		std::cout << "Low Intensity" << std::endl;
	}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();

private:
	LowIntensity() {}
	LowIntensity(const LowIntensity& other);
	LowIntensity& operator=(const LowIntensity& other);
};

class MediumIntensity : public LightState
{
public:
	void enter(Light* light) {
		std::cout << "Medium Intensity" << std::endl;
	}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();

private:
	MediumIntensity() {}
	MediumIntensity(const MediumIntensity& other);
	MediumIntensity& operator=(const MediumIntensity& other);
};

class HighIntensity : public LightState
{
public:
	void enter(Light* light) {
		std::cout << "High Intensity" << std::endl;
	}
	void toggle(Light* light);
	void exit(Light* light) {}
	static LightState& getInstance();

private:
	HighIntensity() {}
	HighIntensity(const HighIntensity& other);
	HighIntensity& operator=(const HighIntensity& other);
};

