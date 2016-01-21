#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
		Joystick stick;

public:
	OI();
	float getjoystickyaxis();
};

#endif
