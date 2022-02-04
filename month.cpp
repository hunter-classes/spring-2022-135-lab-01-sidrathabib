/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 1D

month.cpp asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.
*/

#include <iostream>

int main() {
  //set variables  
  int year, month, common, leap; 
  //user input year 
  std::cout << "Enter year: ";
  std::cin >> year;
  //user input month
  std::cout << "Enter month: ";
  std::cin >> month;

  //calculations for distinguishing commmon v leap
  if (year % 4 != 0) {
    year = common;
  }
  else if (year % 100 != 0) {
    year = leap;
  }
  else if (year % 400 != 0) {
    year = common;
  }
    else {
      year = leap;
    }

  //sorting months 

  //31 day months
  if (month == 1) { 
    std::cout << "31 days";
  }
  else if (month == 3) { 
    std::cout << "31 days";
  }
  else if (month == 5) { 
    std::cout << "31 days";
  }
  else if (month == 7) { 
    std::cout << "31 days";
  }
  else if (month == 8) { 
    std::cout << "31 days";
  }
  else if (month == 10) { 
    std::cout << "31 days";
  }
  else if (month == 12) { 
    std::cout << "31 days";
  }

  //30 day months
  else if (month == 4) { 
    std::cout << "30 days";
  }
  else if (month == 6) { 
    std::cout << "30 days";
  }
  else if (month == 9) { 
    std::cout << "30 days";
  }
  else if (month == 11) { 
    std::cout << "30 days";
  }

  //sorting special months
  else if (month == 2 && year == common) {
    std::cout << "28 days";
  }
  else if (month == 2 && year == leap) {
    std::cout << "29 days";
  }

  //returns output 
  return 0;
}
