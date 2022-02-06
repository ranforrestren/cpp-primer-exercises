// basic C++ program that shows use of I/O

#include <iostream>

int main() 
{
	std::cout << "Enter two numbers:" << std::endl;
	int	v1 = 0, v2 = 0; // create two int to hold input
	std::cin >> v1 >> v2; // input two numbers
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
	return 0;
}