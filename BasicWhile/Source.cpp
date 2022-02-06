// basic program to show use of while loops

#include <iostream>

int main() 
{
	int sum = 0, val = 1; // initialize variables
	while (val <= 10) { // use while to count to 10
		sum += val; //asigns sum + val to sum
		++val; // increments val by 1
	}
	// print sum
	std::cout << "Sum of 1 to 10 inclusive is: " << sum << std::endl;

	return 0;
}