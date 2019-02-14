#include "Calculator.h"
#include <math.h>

namespace calculator {
	
	double add(double left, double right){
		current_value = (left + right);
		return current_value;
	}
	double subtract(double sub_from, double sub) {
		return(sub_from - sub);
	}
	double multiply(double num1, double num2) {
		return(num1*num2);
	}
	double divide(double num1, double num2) {
		return(num1 / num2);
	}
	void memory_store(double number) {
		memory_value = number;
	}
	double memory_recall(){
		return memory_value;
	}
	void memory_clear() {
		memory_value = 0;
	}
	double invert(double number) {
		return (number*-1);
	}
	// https://stackoverflow.com/questions/845912/what-is-the-c-function-to-raise-a-number-to-a-power
	double power(double base, double numer) {
		return pow(base, numer);
	}

}