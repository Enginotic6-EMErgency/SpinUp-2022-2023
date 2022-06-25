#include "devices.h"

Motor leftDrive1(1, false);
Motor leftDrive2(2, false);
Motor leftDrive3(3, false);
Motor rightDrive1(4, true);
Motor rightDrive2(5, true);
Motor rightDrive3(6, true);
Motor intake(7, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES);
Motor flywheel(8, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES);
Controller driverController(CONTROLLER_MASTER);

