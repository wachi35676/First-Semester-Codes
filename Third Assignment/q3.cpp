/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
#include <cmath>
using namespace std;

double sum1 (int n);// prototype the function run the first formula
double sum2 (int n);// prototype the function run the second formula
double sum3 (int n);// prototype the function run the third formula

int main ()
{
	//declaration and intilization
	int choice = 0;
	double N = 0;
	do
	{
		cout << "1 -> (1/2)^n \n";
		cout << "2 -> n/(n+1) \n";
		cout << "3 -> 1/n\n";
		
		//taking input from user & verifying it
		cout << "Enter Choice from 1 to 3: ";
		cin >> choice;
		cout << "Enter n (the value should be greater than 0): ";
		cin >> N;
	}
	while (choice < 1 || choice > 3 || N < 1);
	
	//the case statement will run the formula user wanted
	switch (choice)
	{
		case 1:
		{
			cout << "Your Answer is " << sum1(N);
			break;
		}
		case 2:
		{
			cout << "Your Answer is " << sum2(N);
			break;
		}
		case 3:
		{
			cout << "Your Answer is " << sum3(N);
			break;
		}
	}
	
	cout << endl;
}

double sum1 (int n)
{
	double answer = 0.0;
	for (int i = 1; i <= n ; i++)
	{
		answer += pow((1.0/2.0), i);
	}
	return answer;
}
double sum2 (int n)
{
	double answer = 0.0;
	for (int i = 1; i <= n ; i++)
	{
		answer += i/(i+1.0);
	}
	return answer;
}
double sum3 (int n)
{
	double answer = 0.0;
	for (int i = 1; i <= n ; i++)
	{
		answer += (1.0/i);
	}
	return answer;
}
