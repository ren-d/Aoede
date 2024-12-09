#pragma once

#include "AudioHelpers.h"

class AudioListener
{
public:
	AudioListener();
	~AudioListener();

	void UpdatePosition(int x, int y, int z);
	void UpdateRotation(float x, float y, float z);
	vec3 getPosition();
	vec3 getRotation();
	vec3 getPreviousRotation();
private:
	vec3 PrevRotation;
	vec3 position;
	vec3 rotation;
};

