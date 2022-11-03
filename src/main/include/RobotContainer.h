#pragma once

#include <frc2/command/Command.h>
#include <frc/XBoxController.h> //probably wrong, fix later

#include "commands/SpinMotor.h"
#include "subsystems/TalonFX.h"

class RobotContainer {
 public:
  RobotContainer();
  
 private:
  // The robot's subsystems and commands are defined here...
  frc::XboxController controller{0};
  
  TalonFX motor;
  SpinMotor motorSpin;

  void ConfigureButtonBindings();
};
