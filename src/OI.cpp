// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveWithJoysticks.h"
#include "Commands/PanCameraLeft.h"
#include "Commands/PanCameraRight.h"
#include "Commands/ArmControl.h"
#include "Commands/TiltCameraDown.h"
#include "Commands/TiltCameraUp.h"
#include "Commands/RollingPinThing.h"

OI::OI() {
    xBoxController.reset(new Joystick(0));

    // SmartDashboard Buttons
    SmartDashboard::PutData("DriveWithJoysticks", new DriveWithJoysticks());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    SmartDashboard::PutData("PanCameraLeft", new PanCameraLeft());
    SmartDashboard::PutData("ArmControl", new ArmControl());


    JoystickButton* armRaiseButton = new JoystickButton(xBoxController.get(), ARM_RAISE_BUTTON);
    armRaiseButton->WhenPressed(new ArmControl());

    JoystickButton* armLowerButton = new JoystickButton(xBoxController.get(), ARM_LOWER_BUTTON);
    armLowerButton->WhenPressed(new ArmControl());

    JoystickButton* armExtendButton = new JoystickButton(xBoxController.get(), ARM_EXTEND_BUTTON);
    armExtendButton->WhenPressed(new ArmControl());

    JoystickButton* armWinchButton = new JoystickButton(xBoxController.get(), ARM_WINCH_BUTTON);
    armWinchButton->WhenPressed(new ArmControl());



    JoystickButton* spitBallButton = new JoystickButton(xBoxController.get(),  SPIT_BALL_BUTTON);
    spitBallButton->WhenPressed(new RollingPinThing());

	JoystickButton* eatBallButton = new JoystickButton(xBoxController.get(), EAT_BALL_BUTTON);
	eatBallButton->WhenPressed(new RollingPinThing());

}

std::shared_ptr<Joystick> OI::getXBoxController() {
   return xBoxController;
}

