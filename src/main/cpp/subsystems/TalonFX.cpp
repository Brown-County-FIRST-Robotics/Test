#include "subsystems/TalonFX.h"

TalonFX::TalonFX() : motor{0} {} //constructor

TalonFX::ChangeMotor(bool turnOn) {
  if (turnOn) {
    motor.Set(.7);
  }
  else {
    motor.Set(0);
  }
}