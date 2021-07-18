/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>  
using namespace std;

bool winCheck(int playerNumber);// prototype function checks if the player won
void boardUpdater(int position, int playerNumber);// prototype function updates the board with user inputs
char printer(int num);// prototype funtions decide to print X or O
void boardPrinter();// prototype function prints the board
bool occupiedChecker(int enteredNum, int position);// prototype function checks the the position was already used or not
bool invalidData(int Num);// prototype function checks if the data was out of range 

	//declaration and intilization
	
int grid1 = -1, grid2 = -1, grid3 = -1, grid4 = -1, grid5 = -1, grid6 = -1, grid7 = -1, grid8 = -1, grid9 = -1;

int main ()
{
	//declaration and intilization
	int player1 = -1 , player2 = -1, turn = 0;
	char choice = '0';
	srand (time(0));
	
	cout << "1 -> Single player game (vs. computer)\n";
	cout << "2 -> 2-player game\n";
	
	cin >> choice;
	
	//input validation
	while (choice > '2' || choice < '1')
	{
		cout << "Invalid Input Please Enter Again: ";
		cin >> choice;
	}
	
	// single player code:
	if(choice == '1')
	{
		
		boardPrinter();
		
		while (!winCheck(0) && !winCheck(1))
		{
		
			//taking input from user and verifying it
			do
			{
				cout << "enter grid number: ";
				cin >> player1;
				
				if (occupiedChecker(0, player1) || occupiedChecker(1, player1))
				{
					cout << player1 <<" is used please enter another number\n";
				}
			}
			while (occupiedChecker(0, player1) || occupiedChecker(1, player1) || invalidData(player1));
			
			boardUpdater(player1, 0);
			turn++;
			
			// the code will break as soon as all squares are filled
			if (!(turn < 9))
			break;
			
			boardPrinter();
			
			if (winCheck(0))
			break;
			
			do
			{
				player2 = rand() % 9 + 1;
				grid1 == player2;
				
			}
			while (occupiedChecker(1, player2) || occupiedChecker(0, player2) );
			
			boardUpdater(player2, 1);
			turn ++;
			
			cout << "---------------------------\n";
			
			boardPrinter();
			
		}
		
		//outputting the result
		if(winCheck(0))
		{
			cout << "You Win!!!\n";
		}
		else if (winCheck(1))
		{
			cout << "You Lost :(\n";
		}
		else
		{
			cout << "Its a Draw\n";
		}
	}
	
	else if (choice == '2')
	{
			
		
		boardPrinter();
		
		while (!winCheck(0) && !winCheck(1))
		{
			//taking input from user and verifying it
			do
			{
				cout << "player1 enter grid number: ";
				cin >> player1;
				
				if (occupiedChecker(0, player1) || occupiedChecker(1, player1))
				{
					cout << player1 <<" is used please enter another number\n";
				}
			}
			while (occupiedChecker(0, player1) || occupiedChecker(1, player1) || invalidData(player1));
			
			boardUpdater(player1, 0);
			turn++;
			
			// the code will break as soon as all squares are filled
			if (!(turn < 9))
			break;
			
			boardPrinter();
			
			if (winCheck(0))
			break;
			
			//taking input from user and verifying it
			do
			{
				cout << "player2 enter grid number: ";
				cin >> player2;
				
				if (occupiedChecker(0, player2) || occupiedChecker(1, player2))
				{
					cout << player1 <<" is used please enter another number\n";
				}
			}
			while (occupiedChecker(1, player2) || occupiedChecker(0, player2) || invalidData(player2));
			
			boardUpdater(player2, 1);
			turn++;
			
			boardPrinter();
		}
		
		//outputting the result
		if(winCheck(0))
		{
			cout << "Player 1 Wins!!!\n";
		}
		else if (winCheck(1))
		{
			cout << "Player 2 Wins!!!\n";
		}
		else
		{
			cout << "Its a Draw\n";
		}
	}
}

bool winCheck(int playerNumber)
{
	bool win = false;
	if (grid1 == playerNumber && grid5 ==playerNumber && grid9 ==playerNumber)
		win = true;
	else if (grid3 == playerNumber && grid5 ==playerNumber && grid7 ==playerNumber)
		win = true;
	else if (grid1 == playerNumber && grid4 == playerNumber && grid7 == playerNumber)
		win = true;
	else if (grid2 == playerNumber && grid5 == playerNumber && grid8 == playerNumber)
		win = true;
	else if (grid3 == playerNumber && grid6 == playerNumber && grid9 == playerNumber)
		win = true;
	else if (grid1 == playerNumber && grid2 == playerNumber && grid3 == playerNumber)
		win = true;
	else if (grid4 == playerNumber && grid5 == playerNumber && grid6 == playerNumber)
		win = true;
	else if (grid7 == playerNumber && grid8 == playerNumber && grid9 == playerNumber)
		win = true;
	return win;
}

void boardUpdater(int position, int playerNumber)
{
	switch (position)
	{
		case 1:
		{
			grid1 = playerNumber;
			break;
		}
		case 2:
		{
			grid2 = playerNumber;
			break;
		}
		case 3:
		{
			grid3 = playerNumber;
			break;
		}
		case 4:
		{
			grid4 = playerNumber;
			break;
		}
		case 5:
		{
			grid5 = playerNumber;
			break;
		}
		case 6:
		{
			grid6 = playerNumber;
			break;
		}
		case 7:
		{
			grid7 = playerNumber;
			break;
		}
		case 8:
		{
			grid8 = playerNumber;
			break;
		}
		case 9:
		{
			grid9 = playerNumber;
			break;
		}
	}
}

char printer(int num)
{
	char temp;
	if (num == 1)
	temp = 'X';
	else if (num == 0)
	temp = 'O';
	else
	temp = ' ';
	return temp;
	
}

void boardPrinter()
{
	cout << endl;
	cout << printer(grid1) << "|" << printer(grid2) << "|" << printer(grid3) << endl;
	cout << "-----\n";
	cout << printer(grid4) << "|" << printer(grid5) << "|" << printer(grid6) << endl;
	cout << "-----\n";
	cout << printer(grid7) << "|" << printer(grid8) << "|" << printer(grid9) << endl;
	
	
}

bool occupiedChecker(int enteredNum, int position)
{
	bool temp = false;
	switch (position)
	{
		case 1:
		{
			if (grid1 == enteredNum)
			{
				temp = true;
			}
			break;
		}
		case 2:
		{
			if (grid2 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 3:
		{
			if (grid3 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 4:
		{
			if (grid4 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 5:
		{
			if (grid5 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 6:
		{
			if (grid6 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 7:
		{
			if (grid7 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 8:
		{
			if (grid8 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
		case 9:
		{
			if (grid9 == enteredNum)
			{
				temp =  true;
			}
			break;
		}
	}
	
	return temp;
}

bool invalidData(int Num)
{
	bool temp = false;
	
	if (Num > 9 || Num < 1)
	{
		temp = true;
		cout << "input was out of range \n";
	}
	return temp;
}
