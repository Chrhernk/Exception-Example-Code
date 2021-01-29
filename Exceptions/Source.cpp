/*

doing try and catch today, 
It lives in diffrent places, 
usually in functions or methods,
Methods are functions within classes
write four diffrent exceptions minimum
sufficent outputs for each one
more than one catch type
print description of the program, and how to use it
and should do more than catch the exceptions -- Should have good user Experience / interface

*/ 
// Notes for Assignment

#include <iostream>
#include <string>

// includes

// Prototype functions here

void DoWork(); 

int main()
{

	std::cout << "\n\n\t *** Excetions Demo *** \n\n" << std::endl;
	DoWork();
	return 0;

}

void DoWork()
{

	try
	{
		std::cout << "\n ***Please input a number from 1 to 10*** \n";
		int MyNumber;
		std::cin >> MyNumber;
		if (MyNumber > 10 || MyNumber < 1)
		{
			throw 11;
		}

		for (int i = 0; i < 5; i++) 
		{
			std::cout << "\nWorking on task " << i << std::endl;
			if (i == 3)
			{
				throw 33;
			}
		}
	}
	catch (...)
	{
		// catch (int error_code
		int error_code = 0;

		if (error_code == 11) { std::cout << "\n The user can not count pass ten!" << std::endl; }
		else if (error_code == 33) { std::cout << "\n Error While Working on Task, Please inspect code, and Try again! " << std::endl; }
		else { std::cout << "\n Error While Working! Sorry for the Trouble, as we can not find where it is!" << std::endl; }
	}
	return;
}