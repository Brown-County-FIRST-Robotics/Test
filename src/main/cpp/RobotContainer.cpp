#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>
#include <frc/XboxController.h> //used for enumerators

RobotContainer::RobotContainer() : spinMotor(p_motors) {
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings to commands here
  frc2::JoystickButton(&controller, frc::XboxController::Button::kA).WhenHeld(SpinMotor(p_motors));
}