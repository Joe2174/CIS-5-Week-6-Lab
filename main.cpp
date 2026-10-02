#include <iostream>

using std::cout;

// Lab 6 — Joe Barron
// CIS 5 Week 06 · Even and odd

int main() {
	int even = 0;

	//I have it start at 0 to set the minimum value, and then 100 to set the maximum value.
	for (
		int i = 0; //The starting value of the range
		i <= 100; // The test and condition to check if the value is less than or equal to 100
		i += 2 //The update increment by 2 for even numbers in the range
		) {
		even += i;
	}
	cout << "The even numbers from 0 to 100 added together is: " << even << std::endl;

	int odd = 1;
	int sum = 0;
	while (odd <= 99) {
		sum += odd;
		odd += 2;
	}
	cout << "The odd numbers from 1 to 99 added together is: " << sum << std::endl;


  return 0;
}
