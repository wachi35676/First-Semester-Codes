/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
using namespace std;

void printVowel(char letter);// prototype prints vowels given to it with aestric

int main ()
{
	//declaration and intilization
	char choice = '1';
	
	
	//taking input from user and checks if it was vowel or not will exit when it isnt a vowel
	do
	{
		cout << "Enter Choice: ";
		cin >> choice;
		printVowel(choice);
	}
	while (choice == 'A' || choice == 'a' || choice == 'E' || choice == 'e' || choice == 'I' || choice == 'i' || choice == 'O' || choice == 'o' || choice == 'U' || choice == 'u' );
}

void printVowel(char letter)
{
	switch (letter)
	{
		case 'A':
		{
			for (int i = 0 ; i < 5 ; i++)
			cout << " ";
			cout << "*\n";
			
			for (int i = 0 ; i < 4 ; i++)
			cout << " ";
			cout << "* *\n";
			
			for (int i = 0 ; i < 3 ; i++)
			cout << " ";
			cout << "*   *\n";
			
			cout << "  *******\n";
			
			for (int i = 0 ; i < 1 ; i++)
			cout << " ";
			cout << "*       *\n";
			
			for (int i = 0 ; i < 0 ; i++)
			cout << " ";
			cout << "*         *\n";
			break;
		}
		case 'a':
		{
			cout << " ";
			for (int i = 0 ; i < 3; i++)
			cout << "*";
			cout << endl;
			
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			cout << "*";
			for (int i = 0 ; i < 3; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			break;
		}
		case 'E':
		{
			for (int i = 0 ; i < 6; i++)
			cout << "*";
			cout << endl;
			
			for (int i = 0 ; i < 2; i++)
			cout << "*\n";
			
			for (int i = 0 ; i < 6; i++)
			cout << "*";
			cout << endl;
			
			for (int i = 0 ; i < 2; i++)
			cout << "*\n";
			
			for (int i = 0 ; i < 6; i++)
			cout << "*";
			cout << endl;
			break;
		}
		case 'e':
		{
			cout << " ";
			for (int i = 0 ; i < 3; i++)
			cout << "*";
			cout << endl;
			
			cout << "*";
			for (int i = 0 ; i < 3; i++)
			cout << " ";
			cout << "*\n";
			
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			cout << "*\n";
			
			cout << " ";
			for (int i = 0 ; i < 3; i++)
			cout << "*";
			cout << endl;
			
			break;
		}
		case 'I':
		{
			for (int i = 0 ; i < 5; i++)
			cout << "*";
			cout << endl;
			
			for (int i = 0 ; i < 4; i++)
			cout << "  *\n";
			
			for (int i = 0 ; i < 5; i++)
			cout << "*";
			cout << endl;
			
			break;
		}
		case 'i':
		{
			cout << "  *\n";
			cout << "\n";
			
			for (int i = 0 ; i < 4; i++)
			cout << "  *\n";
			
			break;
		}	
		case 'O':
		{
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			break;
		}
		case 'o':
		{
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			break;
		}	
		case 'U':
		{
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			
			break;
		}	
		case 'u':
		{
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			
			cout << "*";
			for (int i = 0 ; i < 6; i++)
			cout << " ";
			cout << "*\n";
			
			cout << " *";
			for (int i = 0 ; i < 4; i++)
			cout << " ";
			cout << "*\n";
			
			cout << "  ";
			for (int i = 0 ; i < 4; i++)
			cout << "*";
			cout << endl;
			break;
		}
		default:
		{
			cout << "****** *****   *****    ****   ***** \n";
			cout << "*      *    *  *    *  *    *  *    *\n";
			cout << "*      *    *  *    * *      * *    *\n";
			cout << "****** *****   *****  *      * *****\n";
			cout << "*      **      **     *      * **\n";
			cout << "*      *  *    *  *    *    *  *  *\n";
			cout << "****** *    *  *    *   ****   *    *\n";
			break;
		}
	}
}
