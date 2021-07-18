/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
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
}
