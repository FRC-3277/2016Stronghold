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

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DriveWithJoysticks.h"
#include "Commands/PanCameraLeft.h"
#include "Commands/PanCameraRight.h"
#include "Commands/ArmControl.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    xBoxController.reset(new Joystick(0));
    

    // SmartDashboard Buttons
    SmartDashboard::PutData("DriveWithJoysticks", new DriveWithJoysticks());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    SmartDashboard::PutData("PanCameraLeft", new PanCameraLeft());
    SmartDashboard::PutData("ArmControl", new ArmControl());


    JoystickButton* ButtonA = new JoystickButton(xBoxController.get(), 1);
    JoystickButton* ButtonB = new JoystickButton(xBoxController.get(), 2);

    JoystickButton* leftKeyPadLeft = new JoystickButton(xBoxController.get(), 3);
    				leftKeyPadLeft->WhileHeld(new PanCameraLeft());

    JoystickButton* leftKeyPadRight = new JoystickButton(xBoxController.get(), 4);
    leftKeyPadRight->WhileHeld(new PanCameraRight());



    ButtonA->WhenPressed(new ArmControl());
    ButtonB->WhenPressed(new ArmControl());



    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getXBoxController() {
   return xBoxController;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
