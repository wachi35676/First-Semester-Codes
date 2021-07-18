/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
using namespace std;

char colorFetcher (int grid);// prototype the function will fetch the color corresponding to the number
void fetchedUpdater(int matchedNum);// prototype the function will store the numbers tht matched
bool fetchedChecker(int enteredNum);// prototype the function will check if the number was already matched or not
bool allMatch();// prototype the function will act as a flag to check if all the colors have been matched or not

	//declaration and intilization
	
int grid1 = 0, grid2 = 0, grid3 = 0, grid4 = 0, grid5 = 0, grid6 = 0, grid7 = 0, grid8 = 0, grid9 = 0, grid10 = 0, grid11 = 0, grid12 = 0, grid13 = 0, grid14 = 0, grid15 = 0, grid16 = 0, grid17 = 0, grid18 = 0, grid19 = 0, grid20 = 0, grid21 = 0, grid22 = 0, grid23 = 0, grid24 = 0, grid25 = 0, grid26 = 0, grid27 = 0, grid28 = 0, grid29 = 0, grid30 = 0, grid31 = 0, grid32 = 0, grid33 = 0, grid34 = 0, grid35 = 0, grid36 = 0;

int gridUpdater = 1;


int main()
{
	//declaration and intilization
	int gridNum1, gridNum2;
	int lives = 3;
	bool matchedNum1, matchedNum2;
	do
	{
		do
		{
			
			//taking input from user & verifying it
			do
			{
				cout << "\nOnly Enter Numbers from 1 to 36\n";
				cout << "Enter First Grid Number: ";
				cin >> gridNum1;
				cout << "Enter Second Grid Number: ";
				cin >> gridNum2;
				
				matchedNum1 = fetchedChecker(gridNum1);
				
				//the condition checks if the user had already entered the number if he did he will lose a live
				if (matchedNum1)
				{
					cout << "You lost a life\n";
					lives --;
				}
				
				
				
				matchedNum2 = fetchedChecker(gridNum2);
				
				//the condition checks if the user had already entered the number if he did he will lose a live
				if (matchedNum2)
				{
					cout << "You lost a life\n";
					lives --;
				}
			}
			while (((gridNum1 < 1 || gridNum1 > 36) && (gridNum2 < 1 || gridNum2 > 36)) && lives != 0);
		}
		while((matchedNum1 || matchedNum2 )&& lives != 0); // loop will continue to run until the user enter a valid data and enters a new data. it will stop to run when user runs out of lives
		
		//checking if the colors matched or not
		if(colorFetcher(gridNum1) == colorFetcher(gridNum2))
		{
			
			cout <<  "Colors are same \n";
			fetchedUpdater(gridNum1);
			fetchedUpdater(gridNum2);
		}
		else
		{
			cout <<  "Colors were not same.\n";
		}
		
	}
	while ( !allMatch() && lives != 0); // will repeat the entire program until lives run out or all numbers matched
	
	if (lives == 0)
	cout << "\nYou ran out of lives\n";
	else 
	cout << "\nYou won!!!\n";
}

char colorFetcher (int grid)
{
	char color;
	switch(grid)
	{
		case 1:
		case 6:
		case 7:
		case 12:
		case 17:
		case 20:
		case 28:
		case 33:
		color = 'G';
		break;
		case 2:
		case 11:
		case 13:
		case 18:
		case 19:
		case 24:
		case 29:
		case 32:
		color = 'R';
		break;
		case 3:
		case 10:
		case 14:
		case 23:
		case 25:
		case 30:
		case 31:
		case 36:
		color = 'B';
		break;
		case 4:
		case 9:
		case 15:
		case 22:
		case 26:
		case 35:
		color = 'O';
		break;
		case 5:
		case 8:
		case 16:
		case 21:
		case 27:
		case 34:
		color = 'Y';
		break;	
	}
	return color;
}

bool fetchedChecker(int enteredNum)
{
	if (grid1 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid2 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid3 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid4 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid5 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid6 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid7 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid8 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid9 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid10 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid11 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid12 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid13 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid14 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid15 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid16 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid17 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid18 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid19 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid20 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid21 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid22 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid23 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid24 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid25 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid26 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid27 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid28 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid29 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid30 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid31 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid32 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid33 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid34 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid35 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else if (grid36 == enteredNum)
	{
		cout << enteredNum <<" was already entered please enter another number.\n";
		return true;
	}
	else
	{
		return false;
	}
	
}

void fetchedUpdater(int matchedNum)
{
	switch (gridUpdater)
	{
		case 1:
		{
			grid1 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 2:
		{
			grid2 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 3:
		{
			grid3 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 4:
		{
			grid4 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 5:
		{
			grid5 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 6:
		{
			grid6 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 7:
		{
			grid7 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 8:
		{
			grid8 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 9:
		{
			grid9 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 10:
		{
			grid10 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 11:
		{
			grid11 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 12:
		{
			grid12 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 13:
		{
			grid13 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 14:
		{
			grid14 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 15:
		{
			grid15 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 16:
		{
			grid16 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 17:
		{
			grid17 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 18:
		{
			grid18 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 19:
		{
			grid19 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 20:
		{
			grid20 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 21:
		{
			grid21 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 22:
		{
			grid22 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 23:
		{
			grid23 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 24:
		{
			grid24 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 25:
		{
			grid25 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 26:
		{
			grid1 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 27:
		{
			grid27 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 28:
		{
			grid28 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 29:
		{
			grid29 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 30:
		{
			grid30 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 31:
		{
			grid31 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 32:
		{
			grid32 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 33:
		{
			grid33 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 34:
		{
			grid34 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 35:
		{
			grid35 = matchedNum;
			gridUpdater ++ ;
			break;
		}
		case 36:
		{
			grid36 = matchedNum;
			gridUpdater ++ ;
			break;
		}
	}
}

bool allMatch()
{

	if (gridUpdater == 37)
	return true;
	else
	return false;
}

