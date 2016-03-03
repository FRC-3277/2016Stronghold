#ifndef Autonomous_queue_H
#define Autonomous_queue_H

#include <Commands/Turn.h>
#include "Commands/CommandGroup.h"
#include "WPILib.h"
#include "Drive_Forward.h"
#include "RollingPinThing.h"
#include "AutonomousCommand.h"

class Autonomous_queue: public CommandGroup
{
public:
	Autonomous_queue();
};

#endif
