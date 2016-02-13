#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<CANTalon> lifterCANJaguar;
	std::shared_ptr<Spark> armLinearActuator;
public:
	Lifter();
	void InitDefaultCommand();
	void pushArmOut();
	void pullArmIn();
	void stopHorizontal();
	void Raise();
	void PullUp();
	void Stop();
};

#endif
