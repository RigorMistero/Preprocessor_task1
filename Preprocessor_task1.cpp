#include <iostream>

#define MODE '3'

#ifdef MODE '1'
int add (int a, int b)
{
	return a + b;
}
#endif

int main(int argc, char** argv)
{

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
		else { std::cout << "Unknown mode. Shutdown"; return 0; }
	} 
#endif

	return EXIT_SUCCESS;
}
