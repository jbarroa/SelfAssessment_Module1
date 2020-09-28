//Jasmine Barroa
//September 28, 2020
//User enter first name, last name, phone number, year they were born

#include <iostream>

using namespace std;

int main() {
  string firstName, lastName;
  long phoneNumber;
  int year;
  cout << "Enter your first name: ";
  cin >> firstName;
  cout << "Enter your last name: ";
  cin >> lastName;
  cout << "Enter your phone number: ";
  cin >> phoneNumber;
  cout << "Enter the year you were born: ";
  cin >> year;

  cout << "Your name is " << firstName << lastName << endl;
  cout << "Your phone number is: " << phoneNumber << endl;
  cout << "The year you were born: " << year << endl;
}