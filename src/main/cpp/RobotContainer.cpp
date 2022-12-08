#include "RobotContainer.h"

#include <frc2/command/button/JoystickButton.h>
#include <frc/XboxController.h> //used for enumerators

using frc::XboxController;
using namespace frc2;

RobotContainer::RobotContainer() {
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings to commands here
	(JoystickButton(&controller, XboxController::Button::kA)
		&& JoystickButton(&controller, XboxController::Button::kB))
		.WhileActiveOnce(SpinAll(p_motors), false); //if both are held, spin both (have to use WhileActiveOnce() because of && (docs))
	

	JoystickButton(&controller, XboxController::Button::kA).WhenHeld(SpinTfx(p_motors));
	JoystickButton(&controller, XboxController::Button::kB).WhenHeld(SpinTsrx(p_motors));
}