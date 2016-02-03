#ifndef Lifter_H
#define Lifter_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Lifter: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	std::shared_ptr<CANJaguar> lifterCANJaguar;
public:
	Lifter();
	void InitDefaultCommand();
	void Raise();
	void PullUp();
};

#endif
