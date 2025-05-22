//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("A101_LaunchPage");
	truclient_step("1", "Navigate to 'https://blazedemo.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("A101_LaunchPage",0);
	truclient_step("2", "Wait 10 seconds", "snapshot=Action_2.inf");
	lr_start_transaction("A102_FindFlight");
	truclient_step("3", "Click on Find Flights button", "snapshot=Action_3.inf");
	lr_end_transaction("A102_FindFlight",0);
	truclient_step("4", "Wait 10 seconds", "snapshot=Action_4.inf");
	lr_start_transaction("A103_ChooseFlight");
	truclient_step("5", "Click on Choose This Flight button", "snapshot=Action_5.inf");
	lr_end_transaction("A103_ChooseFlight",0);
	truclient_step("6", "Wait 10 seconds", "snapshot=Action_6.inf");
	lr_start_transaction("A104_PurchaseFlight");
	truclient_step("7", "Click on Purchase Flight button", "snapshot=Action_7.inf");
	lr_end_transaction("A104_PurchaseFlight",0);
test123
	return 0;
}
