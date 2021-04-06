#include <iostream>

int main (void)
{
	int a = 0;
	int b = 0;
	int x = 0;

	std::cout << "for ax + b = 0, please enter the value of a "<< std::endl;
	std::cin >> a;
	if (std::cin.fail())
	{
		std::cout << "Now enter the value of b"<< std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Please enter the second number"<< std::endl;
	std::cin >> b;
	if (std::cin.fail())
	{
		std::cout << "The entered is not a valid number"<< std::endl;
		return EXIT_FAILURE;
	}

	x = (-b)/a;
	std::cout<<"The value of x is "<< x << std::endl;

}
