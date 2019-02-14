#pragma once

namespace calculator

{

	double current_value = 0.0;
	double memory_value = 0.0;
	
	//addition
	double add (double left, double right);
	double subtract(double sub_left, double sub_right);
	double multiply(double num1, double num2);
	double divide(double num1, double num2);
	void memory_store(double number);
	double memory_recall();
	void memory_clear();
	double invert(double number);
	double power(double base, double numer);



	











	

 
}