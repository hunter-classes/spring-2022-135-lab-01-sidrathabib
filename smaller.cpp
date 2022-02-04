/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 1A

smaller.cpp asks the user to input two integer numbers and prints out the smaller of the two
*/

#include <iostream>

int main() {
  //set variable and input for first number 
	int num1;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	
  //set variable and input for second number 
	int num2;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	
  //computes smaller of two inputs 
	if (num1 < num2) {
		std::cout << "The smaller of the two is " << num1;
	}
	else {
		std::cout << "The smaller of the two is " << num2; 
	}
	
  //returns output 
	return 0;
}
