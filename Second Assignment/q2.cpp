/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
using namespace std;

int main()
	{
	//Declaration and Initialization of Variables
	float hoursWorked = 0, basePay = 0 , Pay = 0;
	
	
	//Inputing Data
	cout << "Enter your base pay per hour: ";
	cin >> basePay ;
	
	cout << "Enter the number of hours you worked: ";
	cin >> hoursWorked;
	
	
	//checking for errors and if data is valid
	if (basePay < 8)
	cout << "error\n";
	else if (hoursWorked > 60 || hoursWorked < 0)
	cout << "error\n";
	//calculating and displaying pay and overtime accordingly
	else
	{
		if (hoursWorked > 40)
		{
			cout << "Your total pay is: $" << (basePay * 40) + ((basePay * (hoursWorked - 40)) * 1.5) << endl;
			cout << "Your overtime is: " << hoursWorked - 40 << " hrs"<< endl;
		}
		else
		{
			cout << "Your total pay is: $" << basePay * 40 << endl;
		}
	}
	}
