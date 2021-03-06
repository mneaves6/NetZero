/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: NetZero
 * This program prompts the user to input a number, then the program
 * outputs the number and a message saying whether it is positive,
 * negative, or zero.
 */

/*
 * Pseudo Code:
 * BEGIN
 * 1. Number variable
 * 2. User input
 * 3. If number is greater than zero, number is positive
 * 4. Else if number is less than zero, number is negative
 * 5. Else if number is equal to zero, number is zero
 * END
 */

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Number Variable
	double dblNumber;

	// User Input
	cout << "Enter a number: ";
	cin >> dblNumber;

	// Number is Positive
	if (dblNumber > 0)
	{
		cout << dblNumber << " is a positive number" << endl;
	}

	// Number is Negative
	else if (dblNumber < 0)
	{
		cout << dblNumber << " is a negative number" << endl;
	}

	// Number is Zero
	else if (0 == dblNumber)
	{
		cout << dblNumber << " is zero" << endl;
	}

    return 0;
}

