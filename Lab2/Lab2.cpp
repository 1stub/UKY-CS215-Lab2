/*
 * Course: CS215-014
 * Project: Lab 2 
 * Purpose: This program arranges numbers in increasing or decreasing order based on user input
 * Author: Anthony Arnold
 */

#include <iostream>
#include <string>
using namespace std;

void SortInc(int& a, int& b, int& c) { // Sorts input values in increasing order
	if (a > b) {
		a = a + b;
		b = a - b;
		a = a - b;

	}
	if (a > c) {
		a = a + c;
		c = a - c;
		a = a - c;

	}
	if (b > c) {
		b = b + c;
		c = b - c;
		b = b - c;
	}
}

void SortDec(int &a, int &b, int &c) { // sorts input values in decreasing order
	if (b > a) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	if (c > a) {
		a = a + c;
		c = a - c;
		a = a - c;
	}
	if (b < c) {
		b = b + c;
		c = b - c;
		b = b - c;
	}
}

int main() {
	int num1, num2, num3; 
	string userstring;
	cout << "Your wish is my command!" << endl;
	cout << "I will sort three numbers for your wish: " << endl;
	cout << "Enter I for increasing ordering, D for decreasing order (I or D): ";
	cin >> userstring;
	

	if (userstring == "I" || userstring == "i") // sorts the 3 numbers stored in num1 num2 num3 in increasing order 
	{
		cout << "Please enter 3 numbers: ";
		cin >> num1 >> num2 >> num3;
		SortInc(num1, num2, num3); // calls function SortInc
		cout << num1 << " --> " << num2 << " --> " << num3 << endl;
		if (num1 == num2 || num2 == num3) {
			cout << "Numbers are in leniently increasing order! \n"; // if there are any numbers equal to eachother prints following statement 
		}
		else if (num1 != num2 || num2 != num3) { // if no numbers are equal 
			cout << "Numbers are in strictly increasing order!\n";
		}
	}
	else if (userstring == "D" || userstring == "d") { // sorts num1 num2 num3 in decreasing order 
		cout << "Please enter 3 numbers: ";
		cin >> num1 >> num2 >> num3;
		SortDec(num1, num2, num3); // calls function SortDec
		cout << num1 << " --> " << num2 << " --> " << num3 << endl;
		if (num1 == num2 || num2 == num3) { // if any of the numbers stored in num1 num2 and num3 are equal prints following statement 
			cout << "Numbers are in leniently decreasing order! \n";
		}
		else if (num1 != num2 || num2 != num3) { // if no numbers are equal prints following statement 
			cout << "Numbers are in strictly decreasing order!\n";
		}
	}
	else // if none of the precending statements are true ends the program 
	{ 
		cout << "Invalid choice, quitting the program..." << endl;
	}
	return 0;
}