#include "ctre/Phoenix.h"
#include "frc/TimedRobot.h"
#include "frc/XboxController.h"

using namespace frc;

class Robot : public TimedRobot {
  public:
    WPI_TalonFX motor{0};
    XboxController controller{0};
    
    void TeleopPeriodic() {
      if (controller.GetAButton())
        motor.Set(.25);
      else
        motor.Set(0);
    }
};

#ifndef RUNNING_FRC_TESTS
int main() {
  return StartRobot<Robot>();
}
#endif