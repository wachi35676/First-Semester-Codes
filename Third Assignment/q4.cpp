/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

#include <iostream>
using namespace std;

int nextNumber(int position, int row);// prototype the funtion will return the value at the position
int factorial(int Num);// prototype the function will aid the above funtion

int main ()
{
	
	//declaration and intilization
	
	int i = 0, j = 0, k = 0;
	int rowNumber;
	
	//taking input from user
	cout << "Enter number of rows: ";
	cin >> rowNumber;
	
	while (i < rowNumber) 
	{
		//printing a line of pyramid
		while (j < i)
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
	//updating variables for the next line
		i++;
		j = 0;
	}
	
	cout << endl;
	
	//updating variables for the next pyramid
	i = 0;
	while (i < rowNumber)
	{
		k = rowNumber - i ;
		//printing a line of pyramid
		while ( k > 0)
		{
			cout << " ";
			k--;
		}
		while ( j <= i )
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
	//updating variables for the next line
		i++;
		j = 0;
		
	}
	
	cout << endl;
	
	//updating variables for the next pyramid
	i = 0;
	while (i < rowNumber)
	{
		k = rowNumber - i ;
		
		//printing a line of pyramid
		while (k > 0)
		{ 
			cout << " ";
			k--;
		}
		
		while (j <= i)
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
	//updating variables for the next line
		i++;
		j = 0;
	}
	
	//updating variables for the next pyramid
	i = rowNumber-2;
	while (i >= 0)
	{
		//updating variables for the next line
		j = 0;
		k = rowNumber - i;
		
		//printing a line of pyramid
		while (k > 0)
		{
			cout << " ";
			k--;
		}
		
		while (j <= i)
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
	//updating variables for the next line
		i--;
		
	}
	
	cout << endl;
	
	//updating variables for the next pyramid
	i = rowNumber-1;
	while (i >=0)
	{
		k = rowNumber - i;
		j = 0;
		
		//printing a line of pyramid
		while ( k > 0)
		{
			cout << " ";
			k--;
		}
		while (j <= i)
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
	//updating variables for the next line
		
		i--;
	}
	
	//updating variables for the next pyramid
	i = 1;
	while (i < rowNumber)
	{
		k = rowNumber - i;
		j = 0;
		
		//printing a line of pyramid
		while (k>0)
		{
			cout << " ";
			k--;
		}
		while ( j <= i)
		{
			cout << nextNumber(j, i) << " ";
			j++;
		}
		cout << endl;
		
	//updating variables for the next line
		i++;
		
	}
	

	
}

int nextNumber(int position, int row)
{
	int ans = 1;
	ans = (factorial(row)/(factorial(position)*factorial(row - position)));
	return ans;
}

int factorial(int Num)
{
	int ans = 1;
	for (int i = 1 ; i <= Num ; i++ )
	{
		ans *= i;
	}
	return ans;
}
