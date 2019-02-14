#include <string>
#include "Calculator.h"
#include <iostream>

#include <conio.h>

using namespace std;

std::string left_value;
std::string right_value;



void shiftleftvalue(char keycode)
{
	if (keycode == '.')
	{
		if (left_value.find('.') == string::npos)
		{
			left_value = left_value + keycode;
		}
	}
	else
	{
			left_value = left_value + keycode;
	}
}
void shiftrightvalue(char keycode)
{
	if (keycode == '.')
	{
		if (right_value.find('.') == string::npos)
		//means "." is not there
		{
			right_value = right_value + keycode;
		}
	}
	else
	{
			right_value = right_value + keycode;
	}
}

int main()
{
	//When this is true working on right value
	bool working_on_right = false;

	char op;

	//when this is true should exit program
	bool should_exit = false;

		do
		{
			char keycode = _getche ();

			if ((keycode >= '0' && keycode <= '9') || keycode == ".")
			{
				if (working_on_right)
				{
					shiftRightValuve(keycode);
				}
				else
				{
					shiftLeftValue(keycode);
				}
			}
			else
			{
				switch (keycode)
				{
					case 'x':
					case 'X':
					{
						should_exit = true;
					}break;

					case '+':
					case '-':
					case '*':
					case '/':
					case '^':
					{
						op = keycode;
						working_on_right = true;
					}break;

					case 13:
					{
						switch (op)
						{
							case '+':
							{
								calculator::add(stod(left_value), stod(right_value));
							}break;

						}

						cout << calculator::current_value() << endl;
					}break;

				}
			}

		} while (should_exit == false);

		return 0;
}
