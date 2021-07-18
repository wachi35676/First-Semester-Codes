/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
#include <cmath>
using namespace std;

int sumer (int number);// prototype function will calculate the square of digits

int main ()
{
	//declaration and intilization
	int num = 0, temp = 0;
	bool foundHappyNumber = false;
	cout << "Enter Number: ";
	cin >> num;
	
	//loop will run for 10 time and till when happy number is found
	for (int i = 0 ; i < 10 && !foundHappyNumber; i++)
	{
		
		num = sumer(num);
		
		//checks if happynumber was found
		if (num == 1)
		{
			foundHappyNumber = true;
			cout << "You entered a happy number\n";
		}
	}
	
	if (!foundHappyNumber)
		cout << "Number entered was not a happy number\n" ;	
		
}

int sumer (int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += pow ( number%10, 2 );
		number /= 10;
	} 
	
	return sum;
}
