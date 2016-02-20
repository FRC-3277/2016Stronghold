#include "Autonomous_queue.h"

Autonomous_queue::Autonomous_queue()
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.

	AddSequential(new Drive_Forward(3.0));
	//AddSequential(new Drive_Forward(3.0));
	//AddSequential(new Turn(1.5, 0, .5));
	//AddSequential(new Turn(2, .7, .5));
	//AddSequential(new Turn(1, -.5, -.5));
	AddSequential(new RollingPinThing(1));
	AddSequential(new RollingPinThing(1));

}
