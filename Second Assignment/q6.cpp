/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;

int main()
{
	//printing user interface
	cout << "-----------------------------------------------------\n";
	cout << "        Muhammad Wasif Ali Wasif | 20i- 2315\n";
	cout << "                   Assignment No 2\n";
	cout << "              Programming Fundamentals\n";
	cout << "-----------------------------------------------------\n\n";
	cout << "                      MAIN MENU\n";
	cout << "1 --> Solution to Problem 1 (Binary to Denary)\n";
	cout << "2 --> Solution to Problem 2 (Foo Corp Pay Calc)\n";
	cout << "3 --> Solution to Problem 3 (Troubleshoot HP servers)\n";
	cout << "4 --> Solution to Problem 4 (Grid Color Checker)\n";
	cout << "5 --> Solution to Problem 5 (Lotto Game)\n";
	cout << "0 --> Exit\n\n";
	cout << "Enter your choice: ";
	
	//decleration and initilization
	int problemChoice = 0;
	cin >> problemChoice;
	
	cout << "\n\n";
	
	//running the problem user asked for
	switch (problemChoice)
	{
		case 0:
		{
			cout << "You exited the program\n";
			break;
		}
		case 1:
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
				cout <<  "Denary Number will be: " << denaryNumber << endl;
			}
			else
				cout<< "Enter Data within range maximum of 8 bits are allowed\n";
			break;
		}
		
		case 2:
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
			break;
		}
		case 3:
		{
			//Declaration and Initialization of Variables
			char choice = '0';
			bool skip = false;
			
			cout << "Start General Diagnosis \n";
			cout << "Recoding symptoms information. \n";
			cout << "Is this a newly installed server? (please enter y for Yes and n for No): ";
			//Inputing Data
			cin >> choice;
			
			//validating input
			if (choice != 'y' && choice != 'n')
			{
				cout << "you didnt enter y or n. \nExiting program.\n";
				skip = true;
			}	
			
			//executing task based on input
			if (choice =='y')
			{
			
			//printing task to be performed by the debugger
				cout << "Reseat any components that may have come loose during shipping and reboot server.\n";
				cout << "Does condition still exist?";
				
				//Inputing Data based on new situatation
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}
				
				//checking if solution was found and thn updating a variable	
				if (choice == 'n')
				{
					skip = true;
					cout << "Record action taken.\n"; 
				}	
			}
			
			//checking if solution was found from the updated variable. if found will skip	
			if(!skip)
			{
				cout << "Were options added or was the configuration changed recently? ";
			
				//Inputing Data based on new situatation
				cin >> choice;
			
			//validating input
			if (choice != 'y' && choice != 'n')
			{
				cout << "you didnt enter y or n. \nExiting program.\n";
				skip = true;
			}	
			}
			
			//checking if solution was found from the updated variable. if found will skip
			//executing task based on input
			if (choice == 'n' && skip == false)
			{
			
			//printing task to be performed by the debugger
				cout << "Check for Service Notification. \nDownload the latest software and firmware from the HP website.\n";
				cout << "Does condition still exist?";
				
				//Inputing Data based on new situatation
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}	
				
				//checking if solution was found and thn updating a variable	
				if (choice == 'n')
				{
					skip = true;
					cout << "Record action taken.\n";
				}
			}
			else if (choice == 'y' && skip == false)
			{
			
			//printing task to be performed by the debugger
				cout << "Isolate what has changed. \nVerify it was installed correctly. \nRestore server to last known working state or original shipped configuration. \n";
				cout << "Does condition still exist?";
				
				//Inputing Data based on new situatation
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}	
				
				//checking if solution was found and thn updating a variable	
				if (choice == 'n')
				{
					skip = true;
					cout << "Record action taken.\n";
				}
			}
			
			//checking if solution was found from the updated variable. if found will skip
			if(!skip)
			{
			
			//printing task to be performed by the debugger
				cout << "Isolate and minimize the memory configuration. \n";
				cout << "Does condition still exist?";
				
				//Inputing Data based on new situatation
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}	
				
				//checking if solution was found and thn updating a variable	
				if (choice == 'n')
				{
					skip = true;
					cout << "Record action taken.\n";
				}
			}
			
			//checking if solution was found from the updated variable. if found will skip
			if (!skip)
			{
			
			//printing task to be performed by the debugger
				cout<< "Break server down to minimal configuration. \n";
				cout << "Does condition still exist?";
				
				//Inputing Data based on new situatation
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}	
				if (choice == 'n')
				{
				
				//printing task to be performed by the debugger
					cout<<"Add one part at a time back to configuration to isolate faulty component.\n";
					cout << "Does condition still exist?";
					
					//Inputing Data based on new situatation
					cin >> choice;
					
					//validating input
					if (choice != 'y' && choice != 'n')
					{
						cout << "you didnt enter y or n. \nExiting program.\n";
						skip = true;
					}	
					
					//checking if solution was found and thn updating a variable	
					if (choice == 'n')
					{
						skip = true;
						cout << "Record action taken.\n";
					}
					if(!skip)
					{
					
						//printing task to be performed by the debugger
						 cout << "Ensure the following information is available: \n*Survey Configuration Snapshots \n*OS event log file \n*Full crash dump\n";
						 cout << "Call HP Service Provider\n";
						 skip = true;
					}
				}
			}
			
			//checking if solution was found from the updated variable. if found will skip
			if(!skip)
			{
			
				//printing task to be performed by the debugger
				cout << "Troubleshoot or replace basic server spare parts. \n";
				cout << "Does condition still exist?";
				
				cin >> choice;
				
				//validating input
				if (choice != 'y' && choice != 'n')
				{
					cout << "you didnt enter y or n. \nExiting program.\n";
					skip = true;
				}	
				
				//executing task based on input
				if(!skip && choice == 'y')
				{
					 cout << "Ensure the following information is available: \n*Survey Configuration Snapshots \n*OS event log file \n*Full crash dump\n";
					 cout << "Call HP Service Provider\n";
				}
				else if (!skip && choice == 'n')
				{
					cout << "Record symptom & error information on repair tag if sedning back a failed part. \n";
				}
				
			}
			break;
		}
		case 4:
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
			break;
		}
		case 5:
		{
			//Declaration and Initialization of Variables
			int userNum1 = 0, userNum2 = 0, userNum3 = 0, userNum4 = 0, userNum5 = 0, userNum6 = 0;
			int compNum1 = 0, compNum2 = 0, compNum3 = 0, compNum4 = 0, compNum5 = 0, compNum6 = 0;
			int matchNum1 = -1, matchNum2 = -1, matchNum3 = -1, matchNum4 = -1, matchNum5 = -1, matchNum6 = -1;
			int lotteryWon = 0;
			bool skip = false;
			
			srand(time(NULL));

			//inputing data
			cout << "Enter your lottery Numbers: ";
			cin >> userNum1 >> userNum2 >> userNum3 >> userNum4 >> userNum5 >> userNum6; 
			
			//validating input data
			if (userNum1 < 1 || userNum1 > 40 || userNum2 < 1 || userNum2 > 40 || userNum3 < 1 || userNum3 > 40 || userNum4 < 1 || userNum4 > 40 || userNum5 < 1 || userNum5 > 40 || userNum6 < 1 || userNum6 > 40)
			{
				cout << "please enter number(s) between 1 and 40 inclusive.\n";
				skip = true;
			}
				
			//finding computer generated random numbers
			compNum1 = rand() % 40 + 1;
			compNum2 = rand() % 40 + 1;
			compNum3 = rand() % 40 + 1;
			compNum4 = rand() % 40 + 1;
			compNum5 = rand() % 40 + 1;
			compNum6 = rand() % 40 + 1;
			
			//printing lottery Numbers
			if (!skip)
			{
				cout << "The winning numbers randomly selected by the computer are: " << compNum1 << " " << compNum2 << " " << compNum3 << " " << compNum4 << " " << compNum5 << " " << compNum6 << endl;
			}
			
			//counting lottery won and storing the wining numbers
			if (userNum1 == compNum1 || userNum1 == compNum2 || userNum1 == compNum3 || userNum1 == compNum4 || userNum1 == compNum5 || userNum1 == compNum6)
			{
				lotteryWon++;
				matchNum1 = userNum1;
			}
			if (userNum2 == compNum1 || userNum2 == compNum2 || userNum2 == compNum3 || userNum2 == compNum4 || userNum2 == compNum5 || userNum2 == compNum6)
			{
				lotteryWon++;
				matchNum2 = userNum2;
			}
			
			if (userNum3 == compNum1 || userNum3 == compNum2 || userNum3 == compNum3 || userNum3 == compNum4 || userNum3 == compNum5 || userNum3 == compNum6)
			{
				lotteryWon++;
				matchNum3 = userNum3;
			}
			
			if (userNum4 == compNum1 || userNum4 == compNum2 || userNum4 == compNum3 || userNum4 == compNum4 || userNum4 == compNum5 || userNum4 == compNum6)
			{
				lotteryWon++;
				matchNum4 = userNum4;
			}
			
			if (userNum5 == compNum1 || userNum5 == compNum2 || userNum5 == compNum3 || userNum5 == compNum4 || userNum5 == compNum5 || userNum5 == compNum6)
			{
				lotteryWon++;
				matchNum5 = userNum5;
			}
			
			if (userNum6 == compNum1 || userNum6 == compNum2 || userNum6 == compNum3 || userNum6 == compNum4 || userNum6 == compNum5 || userNum6 == compNum6)
			{
				lotteryWon++;
				matchNum6 = userNum6;
			}
			
			//printing lotterys won and how many did user won
			if (lotteryWon == 5)
			{
				cout << "Congratulations!!! You won the jackpot!\n";
			}
			else if (lotteryWon == 0 && !skip)
			{
				cout << "Your lottery numbers don't match any number. Thanks for playing the lottery game\n";
			}
			else if (!skip)
			{
				cout << "You won " << lotteryWon << " stars: ";
				if (matchNum1 != -1)
				cout << matchNum1 << " ";
				if (matchNum2 != -1)
				cout << matchNum2 << " ";
				if (matchNum3 != -1)
				cout << matchNum3 << " ";
				if (matchNum4 != -1)
				cout << matchNum4 << " ";
				if (matchNum5 != -1)
				cout << matchNum5 << " ";
				if (matchNum6 != -1)
				cout << matchNum6;
				cout << endl;
			}
			break;
		}
		default:
		{
			cout << "Please do not enter any value except 0-5 \nExiting Program.\n";
		}
	}
}
