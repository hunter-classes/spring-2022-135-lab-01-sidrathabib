/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 1C

leap.cpp asks the user to input an integer representing a year number. If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year
*/

#include <iostream>

int main() {
  //set variable and input for first number 
	int year; 
	std::cout << "Enter a year: ";
	std::cin >> year;
	
  //set conditions 
	if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0)
        std::cout << "Leap Year";
			else
        std::cout << "Common Year";
			}
    else
      std::cout << "Leap Year";
	}
	else
    std::cout << "Common Year";
		
  //returns output 
	return 0;
}
