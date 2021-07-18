/*
Name: Muhammad Wasif Ali Wasif
Student ID: 20i-2315
Section: SE-R
*/

# include <iostream>
using namespace std;

int main ()
{
	//declaration and intilization
	int choice = 0, numberOfBurger;
	double cost = 0;
	
	//inputing variable and validatting it
	do
	{
		cout << "\nEnter Number of burgers you want to purchase: ";
		cin >> numberOfBurger;  
		if (numberOfBurger < 1)
		{
			cout << "please enter a value more than 0\n";
		}
	}
	while (numberOfBurger < 1);
	
	cout << "\n***************Buns***************\n";
	cout << "1 -> Toasted Brioche Style Bun\n";
	cout << "2 -> Baker's Bun\n";
	cout << "3 -> No Bun - Lettuce Wrap\n";
	cout << "Note: by entering 0 you can skip the menu except for a few.\n";
	
	//taking input for buns
	do
	{	
		cout << "\nChoose Your Bun: ";
		cin >> choice;
		
		if (choice == 0)
		{
			cout << "Sorry you cant skip this menu.\n";
		} 
		else if (choice > 3 || choice < 1)
		{
			cout << "Input out of range.\n";
		}
		//updating cost
		else
		{
			cost += .72;
		}
	}
	while (choice > 3 || choice < 1);
	
	
	cout << "\n**********Make It Cheesy**********\n";
	cout << "1 -> Cheddar Cheese\n";
	cout << "2 -> Swiss Cheese\n";
	cout << "3 -> Colby Jack Cheese\n";
	cout << "4 -> McDonald'S (R) Classic Cheese\n";
	cout << "5 -> Shaved Parmesan\n";
	cout << "6 -> Continue\n";
	cout << "You can add as much cheese as u want\n";
	
	bool ingAdded = false;
	//taking input for cheesy
	do
	{	
		if (!ingAdded)
		{
			do
			{
				cout << "\nChoose Your Cheese: ";
				cin >> choice;

				if (choice > 6 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				// updating cost
				else if (choice > 0)
				{
					cost += .5;
					ingAdded = true;
				}
			} 
			while (choice > 6 || choice < 0);
		}
		else
		{
			do
			{
				cout << "\nChoose Your Cheese: ";
				cin >> choice;
				
				if (choice == 0)
				{
					cout << "\nYou cant skip anymore please chose continue or add another layer of cheese.\n";
				}
				
				if (choice > 6 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				//updating cost
				else if (choice > 0)
				{
					cost += .5;
				}
			} 
			while (choice > 6 || choice < 1);
		}
	}
	while ((choice < 5 && choice > 1 && !ingAdded) || (choice < 5 && choice > 0 && ingAdded));
	
	cout << "\n*********Turn up The Taste*********\n";
	cout << "1 -> Rasheir Bacon\n";
	cout << "2 -> Crispy Bacon\n";
	cout << "3 -> Egg\n";
	cout << "4 -> 113g Angus Beef Patty\n";
	cout << "5 -> Guacamole\n";
	cout << "6 -> Tortilla Strips\n";
	cout << "7 -> Grilled Mushrooms\n";
	cout << "8 -> Grilled Pinapple\n";
	
	//taking input for turn up the taste
	do
	{
		cout << "\nYour Choice: ";
		cin >> choice;
		
		
		if (choice == 0)
		{
			cout << "Sorry you cant skip this menu.\n";
		} 
		
		if (choice > 9 || choice < 0)
		{
			cout << "Input out of range.\n";
		}
		//updating cost
		else
		{
			cost += 1.2;
		}
	}
	while (((choice > 9 || choice < 1) && choice != 9));
	
	
	cout << "\n**********Fresh'n It Up***********\n";
	cout << "1 -> Whole Leaf Lettuce\n";
	cout << "2 -> Tomato\n";
	cout << "3 -> Carameliesed Grilled Onions\n";
	cout << "4 -> SLiced Beetroot\n";
	cout << "5 -> Red Onion\n";
	cout << "6 -> Long Sliced Pickle\n";
	cout << "7 -> Jalapenos\n";
	cout << "8 -> Continue\n";
	cout << "Max of only 3 allowed\n";

	choice = 1;
	ingAdded = false;
	
	//taking input for fresh n it up
	for (int i = 0 ; (choice > 0 && choice < 8) && i < 3 ; i++)
	{	
		if (!ingAdded)
		{
			do
			{
				cout << "\nYour Choice: ";
				cin >> choice;
				
				//updating cost
				if (choice > 8 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				else if (choice > 0)
				{
					cost += .72;
					ingAdded = true;
				}
			}
			while ((choice > 8 || choice < 0) && choice != 8);
		}
		else
		{
			do
			{
				cout << "\nYour Choice: ";
				cin >> choice;
				
				if (choice == 0)
				{
					cout << "\nYou cant skip anymore please chose continue or add another ingredient.\n";
				}
				
				//updating cost
				if (choice > 8 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				else if (choice > 0)
				{
					cost += .72;
				}
			}
			while ((choice > 8 || choice < 1) && choice != 8);
		}
	}
	
	cout << "\n*************Get Saucy************\n";
	cout << "1 -> Ketchup\n";
	cout << "2 -> Tomato Chilli Jam\n";
	cout << "3 -> BBQ\n";
	cout << "4 -> Dijonnaise\n";
	cout << "5 -> Big Mac(R) Special Sauce\n";
	cout << "6 -> Aioli\n";
	cout << "7 -> Herb Aioli\n";
	cout << "8 -> Chipotlr Mayo\n";
	cout << "9 -> Finish Order\n";
	cout << "You can add as many sauces as u want\n";

	choice = 1;
	
	//taking input for sauces
	do
	{
		if (!ingAdded)
		{	
			do
			{
				cout << "\nYour Choice: ";
				cin >> choice;
				
				if (choice > 9 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				else if (choice > 0)
				{
					cost += .3;
					ingAdded = true;
				}
			}
			while ((choice > 9 || choice < 0) && choice != 9);
		}
		else
		{
			do
			{
				cout << "\nYour Choice: ";
				cin >> choice;
				
				if (choice == 0)
				{
					cout << "\nYou cant skip anymore please finish your order or add another ingredient.\n";
				}
				
				//updating cost
				if (choice > 9 || choice < 0)
				{
					cout << "Input out of range.\n";
				}
				else if (choice > 0)
				{
					cost += .3;
				}
			}
			while ((choice > 9 || choice < 1) && choice != 9);
		}
	}
	while ((choice < 9 && choice > 1 && !ingAdded) || (choice < 9 && choice > 0 && ingAdded));	
	
	cout << "\nTotal cost is $" << numberOfBurger * cost << endl;
}
