/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/


#include <iostream>
using namespace std;

int inputChoice();// prototype function will be called to take all inputs with prompts

void menuOptions();// prototype function will be called to redirect the user to the next category of menu

void menu(); // prototype function displays the menu

void burger();// prototype function will display the burger menu and take input of the type of burger user wants
void parathaRoll();// prototype function will display the pratha roll menu and take input of the type of paratha roll user wants
void pakistaniFood();// prototype function will display the pakistani food menu and take input of what user wants

void menuSelecter();// prototype funtion will be used to redirect to next menu

double discount(double cost);

	//declaration and intilization
	
bool endOrder = false;
int choice = 0;
double cost = 0;

int main ()
{
	//declaration and intilization
	double totalCost = 0;
	cout << "\n***********welcome to main menu***************\n";
	while(!endOrder)
	{
		menuOptions();
		
		//while runs the function until the user enters a valid data
		while (choice != 0 && !endOrder && choice >= 0 && choice <= 3)
		{
			menuSelecter();
		}
		
		
		//totalcost updates according to wht user ordered
		if (choice == 0 || choice > 3 || choice < 0);
		
		else if (choice == 1)
		{
			totalCost += cost;		
			cost = 0;
		}
		else if (choice == 2)
		{
			totalCost += cost * (1.16);		
			cost = 0;
		}
		else if (choice == 3)
		{
			totalCost += cost + 200;		
			cost = 0;
		}
	}
	
	cout << "******Order is complete and your bill is "<< totalCost - discount(totalCost) <<" You received a discount of " << discount(totalCost) <<"*****\n";
}

int inputChoice()
{
	int n = -1;
	//the if statement will help us in returning -1 when user enters enter
	if (cin.peek() != '\n') 
	{
		cin >> n;
	}
	cin.ignore();
	return n;
}

void menuSelecter()
{
	menu();
	
	int select;
	
	cout << "which category you want to choose:";
	
	select = inputChoice();
	
	if (select == 1)
	burger();
	else if (select == 2)
	parathaRoll();
	else if (select == 3)
	pakistaniFood;
	else if (select == -1)
	endOrder = true;
	else
	choice = 0;
}

void menuOptions()
{
	cout << endl;
	cout << "Press 1 for Takeaway\n";
	cout << "Press 2 for Dine In\n";
	cout << "Press 3 for Delivery\n";
	cout << "Press 0 for Exit\n";
	
	choice = inputChoice();
	
	if (choice == 0)
	endOrder = true;
	else if (choice > 3 || choice < 0)
	cout << "Please Enter a valid input\n";
	else if (choice == 1)
	cout << "***********welcome to takeaway menu***************\n";
	else if (choice == 2)
	cout << "***********welcome to dine in menu***************\n";
	else if (choice == 3)
	cout << "***********welcome to delivery menu***************\n";
}

void menu()
{
	cout << endl;
	cout << "Press 1 for Burger\n";
	cout << "Press 2 for Paratha Roll\n";
	cout << "Press 3 for Pakistani Food\n";
	cout << "Press enter to End Order\n";
	cout << "Press 0 for Main Menu\n";	
}

void burger()
{
	cout << endl;
	cout << "Press 1 for Mack_______________699\n";
	cout << "Press 2 for Zinger_____________599\n";
	cout << "Press 3 for Hot________________449\n";
	cout << "Press 4 for Patty Burger_______699\n";
	cout << "Press 5 to End Order______________\n";
	cout << "Press 6 to exit this category_____\n";
	
	int options;
	
	do
	{
	
		cout << "\nBurger option: \n";
		options = inputChoice();
		
		switch(options)
		{
			case 1: cost += 699;
			break;
			case 2: cost += 599;
			break;
			case 3: cost += 449;
			break;
			case 4: cost += 699;
			break;
			case 5: 
			endOrder = true;
			options = 6;
			break;
			case 6:
			break;
			default: cout << "Invalid Input\n";
			break;
		}
	}
	while (options != 6);
}

void parathaRoll()
{
	cout << endl;
	cout << "Press 1 for Platter____________299\n";
	cout << "Press 2 for Cheese_____________349\n";
	cout << "Press 3 for Crispy_____________399\n";
	cout << "Press 4 for Double Trouble_____699\n";
	cout << "Press 5 to End Order______________\n";
	cout << "Press 6 to exit this category_____\n";
	
	int options;
	
	do
	{
	
		cout << "\nParatha roll option: \n";
		options = inputChoice();
		
		switch(options)
		{
			case 1: cost += 299;
			break;
			case 2: cost += 349;
			break;
			case 3: cost += 399;
			break;
			case 4: cost += 699;
			break;
			case 5: endOrder = true;
			options = 6;
			break;
			case 6:
			break;
			default: cout << "Invalid Input\n";
			break;
		}
	}
	while (options != 6);
}

void pakistaniFood()
{
	cout << endl;
	cout << "Press 1 for Haleem_____________199\n";
	cout << "Press 2 for Nihaari____________199\n";
	cout << "Press 3 for Daal_______________149\n";
	cout << "Press 4 for Ghosht_____________249\n";
	cout << "Press 5 to End Order______________\n";
	cout << "Press 6 to exit this category_____\n";
	
	int options;
	
	do
	{
	
		cout << "\nPakistani food option:\n";
		options = inputChoice();
		
		switch(options)
		{
			case 1: cost += 199;
			break;
			case 2: cost += 199;
			break;
			case 3: cost += 149;
			break;
			case 4: cost += 249;
			break;
			case 5: endOrder = true;
			options = 6;
			break;
			case 6:
			break;
			default: cout << "Invalid Input\n";
			break;
		}
	}
	while (options != 6);
}

double discount(double cost)
{
	double temp;
	if (cost < 1000) 
	{
		temp = cost * .05;
	}
	else if (cost < 1500)
	{
		temp = cost * .10;
	}
	else if (cost < 2000)
	{
		temp = cost * .15;
	}
	else if (cost < 2500)
	{
		temp = cost * .20;
	}
	else if (cost < 3000)
	{
		temp = cost * .30;
	}
	else
		temp = cost * .50;
		
	return temp;
}
