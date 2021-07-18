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
}
