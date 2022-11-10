#pragma once

#include <frc2/command/Command.h>
#include <frc/XboxController.h>

#include "commands/SpinMotor.h"
#include "subsystems/Motors.h"

class RobotContainer {
 public:
  RobotContainer();
  
 private:
  // The robot's subsystems and commands are defined here...
  frc::XboxController controller{0};
  
  Motors* p_motors;
  SpinMotor spinMotor;

  void ConfigureButtonBindings();
};
