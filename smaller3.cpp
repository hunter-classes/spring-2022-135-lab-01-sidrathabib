/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 1B

smaller3.cpp asks the user to input three integer numbers, and prints out the smallest of the three
*/

#include <iostream>

int main() {
  	//set variable and input for first number 
	int num1;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	
  	//set variable and input for first number 
	int num2;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	
  	//set variable and input for first number 
	int num3;
	std::cout << "Enter the third number: ";
	std::cin >> num3;
	
	//set conditions 
	if(num1 <= num2 && num1 <= num3)
        std::cout << "The smallest of the three is: " << num1;

  	if(num2 <= num1 && num2 <= num3)
        std::cout << "The smallest of the three is: " << num2;
    
  	if(num3 <= num1 && num3 <= num2)
        std::cout << "The smallest of the three is: " << num3;

  	//returns output
	return 0;
}
