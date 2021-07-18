/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
	{
		//Declaration and Initialization of Variables
		
		int binaryNumber = 0, denaryNumber = 0, position = 0, binaryDigit = 0;
		
		bool skip = false;
		
		//Inputing Data
		cout << "Enter Binary Number: ";
		cin >> binaryNumber;
		
		//Declaration and Initialization of Variables
		int binaryPlace = pow(10, position), positionValue = pow(2, position);
		
		
		//Checking if data is with in range
		if (binaryNumber <= 11111111 && binaryNumber >= 0)
		{
		
			//Seperating a single binary digit
			binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		//checking if the digit is binary or not
		if (!(binaryDigit == 0 || binaryDigit == 1))
			{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
			}
		//denary value is updated	
		else	
			denaryNumber += binaryDigit * positionValue;
		
		//same process is repreated for the rest of the 7 digits
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		position ++;
		
		binaryPlace = pow(10, position); 
		positionValue = pow(2, position);
		
		binaryDigit = ( (binaryNumber % (binaryPlace*10) ) / binaryPlace );
		
		if (!(binaryDigit == 0 || binaryDigit == 1))
		{
			cout << binaryDigit <<" is not a valid binary Number. please enter 1 or 0 only\n";
			skip = true;
		}
		else	
		denaryNumber += binaryDigit * positionValue;
				
		//only displays the calculated denary number if all the values were 0 or 1 else prints an error message
		if (!skip)	
			cout << "Denary Number will be: " << denaryNumber << endl;
		}
		else
			cout<< "Enter Data within range maximum of 8 bits are allowed\n";
		
	}
