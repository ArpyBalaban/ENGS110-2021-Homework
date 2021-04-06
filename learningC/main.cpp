#include <iostream>

int max(int num1, int num2)
{
        if (num1 > num2) {
                return num1;
        }
        return num2;
}

int main()
{
        int x = 0;
        int y = 0;
        std::cout << "Enter first value" << std::endl;
        std::cin >> x;
        if (std::cin.fail()) {
                std::cout << "First is not a number" << std::endl;
                return EXIT_FAILURE;
        }
        std::cout << "Enter second value" << std::endl;
        std::cin >> y;
        if (std::cin.fail()) {
                std::cout << "Second is not a number" << std::endl;
                return EXIT_FAILURE;
        }
        int z = max(x, y);
        std::cout << "The maximum is " << z << std::endl;
        return EXIT_SUCCESS;
}

