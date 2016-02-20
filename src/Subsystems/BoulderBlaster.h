#ifndef BoulderBlaster_H
#define BoulderBlaster_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BoulderBlaster: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<CANTalon> boulderBlasterCANTalon;
public:
	BoulderBlaster();
	void InitDefaultCommand();
	void EatBall();
	void SpitBallOut();
	void StopMotor();
};

#endif
