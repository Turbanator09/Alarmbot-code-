void enter_dock(int motor_power)
{
	if (getGyroDegrees(S2) > 180)
	{
  	drive(motor_power, -motor_power);
  }
  else
  {
  	drive(-motor_power, motor_power);
  }
  while(getGyroDegrees(S2)%360 != 0)
  {}
  drive(0, 0);
  wait1Msec(1000);
  drive(motor_power/2, motor_power/2);
  while(readMuxSensor(msensor_S1_1) == 0)
  {}
	driveDistance(-10, -motor_power/2);
}
