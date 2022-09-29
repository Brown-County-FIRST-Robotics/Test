#include "ctre/Phoenix.h"
#include "frc/TimedRobot.h"
#include "frc/XboxController.h"

using namespace frc;

class Robot : public TimedRobot {
  WPI_TalonFX motor{0};
  
};

#ifndef RUNNING_FRC_TESTS
int main() {
  return StartRobot<Robot>();
}
#endif