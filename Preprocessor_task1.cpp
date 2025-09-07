#include <iostream>

#define MODE '1'

int add(int a, int b);

int main(int argc, char** argv)
{
//	std::cout << "Fuck you!" << std::endl;
#ifndef MODE
#error DEFINE MODE
#endif 
	
#ifdef MODE
	{
		if (MODE == '0') std::cout << "Training mode working";
		else if (MODE == '1')
		{
			int num1{};
			int num2{};
			std::cout << "Combat mode working";
			std::cout << std::endl;
			std::cout << "Enter number 1: ";
			std::cin >> num1;
			std::cout << "Enter number 2: ";
			std::cin >> num2;
			std::cout << "Sum result: " << add(num1, num2);
		}
	} 
#endif

	return EXIT_SUCCESS;
}

int add(int a, int b)
{
	return a + b;
}