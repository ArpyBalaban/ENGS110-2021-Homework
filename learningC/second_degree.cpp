#include <iostream>
#include <cmath>

int main (void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	double x = 0;
	double D = 0;

	std::cout << "for ax^2 + bx + c = 0, please enter the value of a "<< std::endl;
	std::cin >> a;
	if (std::cin.fail())
	{
		std::cout << "the entered value is not valid"<< std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Please enter the value of b"<< std::endl;
	std::cin >> b;
	if (std::cin.fail())
	{
		std::cout << "The entered is not a valid number"<< std::endl;
		return EXIT_FAILURE;
	}
	std::cout << "Lastly, the value of c "<< std::endl;
	std::cin >> c;
	if (std::cin.fail())
	{
		std::cout << "The entered is not a valid number"<< std::endl;
		return EXIT_FAILURE;
	}

	D = pow(b,2) - 4*a*c;
	std::cout << "The valuse of the discriminant is "<< D << std::endl;

	if (D < 0)
	{
		std::cout<< "The discriminant is negetive, therefore there are no salutions"<< std::endl;

	}
	else if (D == 0)
	{
		x = ((-b) + sqrt(D))/ 2*a;
		std::cout << "There is one salution "<< std::endl;
		std::cout << "The value of x is "<< x << std::endl;
	}
	else
	{
		std::cout << "The equation has two salutions"<< std::endl;
		x = ((-b)  -(sqrt(D))) / 2*a;
		std::cout <<"The value of the first salution is "<< x <<std::endl;
		x = ((-b) + sqrt(D)) / 2*a;
		std::cout <<"The valuse of the second salution is "<< x <<std::endl;
	
	}


	
}
