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
	int gridNum1, gridNum2;
	char color1, color2;
	
	//Inputing Data
	cout << "Enter Grid Num 1: ";
	cin >> gridNum1; 
	
	cout << "Enter Grid Num 2: ";
	cin >> gridNum2;
	
	//finding color for the inputs		
	switch(gridNum1)
	{
		case 1:
		case 6:
		case 7:
		case 12:
		case 17:
		case 20:
		case 28:
		case 33:
		color1 = 'G';
		break;
		case 2:
		case 11:
		case 13:
		case 18:
		case 19:
		case 24:
		case 29:
		case 32:
		color1 = 'R';
		break;
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:
		case 30:
		case 31:
		case 36:
		color1 = 'B';
		break;
		case 4:
		case 9:
		case 15:
		case 22:
		case 26:
		case 35:
		color1 = 'O';
		break;
		case 5:
		case 8:
		case 16:
		case 21:
		case 27:
		case 34:
		color1 = 'Y';
		break;	
	}
	
	switch(gridNum2)
	{
		case 1:
		case 6:
		case 7:
		case 12:
		case 17:
		case 20:
		case 28:
		case 33:
		color2 = 'G';
		break;
		case 2:
		case 11:
		case 13:
		case 18:
		case 19:
		case 24:
		case 29:
		case 32:
		color2 = 'R';
		break;
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:
		case 30:
		case 31:
		case 36:
		color2 = 'B';
		break;
		case 4:
		case 9:
		case 15:
		case 22:
		case 26:
		case 35:
		color2 = 'O';
		break;
		case 5:
		case 8:
		case 16:
		case 21:
		case 27:
		case 34:
		color2 = 'Y';
		break;
	}
	
	//checking if data entered was valid
	if (gridNum1 > 36 || gridNum1 < 0 || gridNum2 > 36 || gridNum2 < 0)
		cout << "The entered input is out of range \n";
	//checking if colors are same
	else if (color1 == color2)
		cout << "Colors are the same\n";
	else
		cout << "Colors arent the same\n";
}
