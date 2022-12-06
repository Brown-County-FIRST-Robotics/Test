#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>
#include <frc/XboxController.h> //used for enumerators

RobotContainer::RobotContainer() : spinTfx(p_motors), spinTsrx(p_motors) {
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings to commands here
  frc2::JoystickButton(&controller, frc::XboxController::Button::kA).WhenHeld(SpinTfx(p_motors));
  frc2::JoystickButton(&controller, frc::XboxController::Button::kB).WhenHeld(SpinTsrx(p_motors));
}