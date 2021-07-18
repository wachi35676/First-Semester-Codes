#include <iostream>
#include <cstdlib>
#include <unistd.h> //to add time delay
#include <cmath>

#ifndef COLORS

#define COLORS


/* the following code was copied to use for colors */

#define RST  "\x1B[0m"

#define KRED  "\x1B[31m"

#define KGRN  "\x1B[32m"

#define KYEL  "\x1B[33m"

#define KBLU  "\x1B[34m"

#define FRED(x) KRED x RST

#define FGRN(x) KGRN x RST

#define FYEL(x) KYEL x RST

#define FBLU(x) KBLU x RST


#endif  /* COLORS */

using namespace std;

void clearScreen(); // when called the screen will be cleared
void delay(); // adds a delay to the output
void spaces(int num); // prints a specific number of spaces
void fireWorkStarter(int size, int color); // prints the firework going from bottom to top
void fireWork(int size, int = 5); // the firework explosion

int choice = 19; // global variable to use unitary

int main ()
{
	int choice; //sizechoice
  	int colourchoice; // option chosen by user for color is stored here

	// printing of title screeen: 

  	cout << endl << endl;

  	cout <<
    	"\t\t________________________________________________________________" <<
    	endl;

  	cout <<
    	"\t\t|  ___________________________________________________________  |" <<
    	endl;

  cout <<
    "\t\t| |                                                           | | "
    << endl;

  cout <<
    "\t\t| |        "<<FGRN("\\")<<FYEL("|")<<FBLU("/            ") << FBLU("W E L C O M E") <<FGRN("           \\")<<FYEL("|")<<FBLU("/         ") <<"| | "
    << endl;

  cout <<
    "\t\t| |       "<<FRED("--")<<FYEL("o")<<FRED("--            ") << FGRN("T O   T H E") <<FRED("           --")<<FYEL("o")<<FRED("--        ") <<"| | "
    << endl;

  cout <<
    "\t\t| |        "<<FBLU("/")<<FYEL("|")<<FGRN("\\    ") << FYEL("*F I R E W O R K   M E N U*") <<FBLU("     /")<<FYEL("|")<<FGRN("\\         ") <<"| | "
    << endl;

  cout <<
    "\t\t| |___________________________________________________________| |" <<
    endl;

  cout <<
    "\t\t|_______________________________________________________________|" <<
    endl << endl;

	// printing of different firework sizes and taking input frm user

  cout <<
    "\t________________________________________________________________________________"
    << endl;

  cout <<
    "\t|  ___________________________________________________________________________  |"
    << endl;

  cout <<
    "\t| |                                                                           | | "
    << endl;

  cout <<
    "\t| |                           [1] Mini Firework                               | | "
    << endl;

  cout <<
    "\t| |                           [2] Small Firework                              | | "
    << endl;

  cout <<
    "\t| |                           [3] Medium Firework                             | | "
    << endl;
  cout <<
    "\t| |                           [4] Large Firework                              | | "
    << endl;

  cout <<
    "\t| |___________________________________________________________________________| |"
    << endl;

  cout <<
    "\t|_______________________________________________________________________________|"
    << endl;

	cout << "\n                                    ENTER YOUR CHOICE:";

  	cin >> choice;
  
	switch (choice)
	{
	    	case 1:
		{
			choice = 9;
		}
	      	break;

	    	case 2:
		{
			choice = 19;
		}
	      	break;

	    	case 3:
		{
			choice = 29;
		}
	      	break;
	    	case 4:
		{
			choice = 39;
		}
		break;
		default:
		{

			  cout <<
			    "\t________________________________________________________________________________"
			    << endl;

			  cout <<
			    "\t|  ___________________________________________________________________________  |"
			    << endl;

			  cout <<
			    "\t| |                                                                           | | "
			    << endl;

			  cout <<
			    "\t| |                   ummm we did not gave you that option                    | | "
			    << endl;

			  cout <<
			    "\t| |        but dont worry you can continue we setted the size to medium       | | "
			    << endl;

			  cout <<
			    "\t| |                                     :)                                    | | "
			<< endl;
			  cout <<
			    "\t| |___________________________________________________________________________| |"
			    << endl;

			  cout <<
			    "\t|_______________________________________________________________________________|"
			    << endl;
			    usleep(5000000); // adds a delay so the user can read it easily
			    choice= ::choice; //unitary
		}
	}

	// color choices and taking input frm user

cout <<
	  "\t________________________________________________________________________________"
	  << endl;

	cout <<
	  "\t|  ___________________________________________________________________________  |"
	  << endl;

	cout <<
	  "\t| |                                                                           | | "
	  << endl;

	cout <<
	  "\t| |                           " << FRED("[1] RED COLOUR") << "                                  | | "
	  << endl;

	cout <<
	  "\t| |                           " << FGRN("[2] GREEN COLOUR") << "                                | | "
	  << endl;

	cout <<
	  "\t| |                           " << FYEL("[3] YELLOW COLOUR") << "                               | | "
	  << endl;

	cout <<
	  "\t| |                           " << FBLU("[4] BLUE COLOUR") << "                                 | | "
	  << endl;

	cout <<
	  "\t| |                           [5] WHITE COLOUR                                | | "
	  << endl;

	cout <<
	  "\t| |___________________________________________________________________________| |"
	  << endl;

	cout <<
	  "\t|_______________________________________________________________________________|"
	  << endl;
	cout << "\n                                  ENTER YOUR CHOICE:";
	cin >> colourchoice;

	//fireworks called based on user inputs

	switch (colourchoice)
	{
	    	case 1:
		{
			fireWork(choice,1);
		}
	      	break;

	    	case 2:
		{
			fireWork(choice,2);
		}
	      	break;

	    	case 3:
		{
			fireWork(choice,3);
		}
	      	break;
	    	case 4:
		{
			fireWork(choice,4);
		}
		break;
		case 5:
		{
			fireWork(choice,5);
		}
	      break;
	      default:
		{

  cout <<
    "\t________________________________________________________________________________"
    << endl;

  cout <<
    "\t|  ___________________________________________________________________________  |"
    << endl;

  cout <<
    "\t| |                                                                           | | "
    << endl;

  cout <<
    "\t| |                   ummm we did not gave you that option                    | | "
    << endl;

  cout <<
    "\t| |              but dont worry we setted your firework to white              | | "
    << endl;

  cout <<
    "\t| |                                     :)                                    | | "
<< endl;
  cout <<
    "\t| |___________________________________________________________________________| |"
    << endl;

  cout <<
    "\t|_______________________________________________________________________________|"
    << endl;
    usleep(5000000);
    fireWork(choice);//using default parameter here
		}
	}
	
	usleep(2000000);
	clearScreen();
	
	//ptinting end screen message here
	
cout << endl << endl;
  cout <<
    "\t\t________________________________________________________________" <<
    endl;

  cout <<
    "\t\t|  ___________________________________________________________  |" <<
    endl;

  cout <<
    "\t\t| |                                                           | | "
    << endl;

  cout <<
    "\t\t| |                P R O J E C T  M A D E  B Y:               | | "
    << endl;

  cout <<
    "\t\t| |                                                           | | "
    << endl;

  cout <<
    "\t\t| |            W A S I F , S H A F  , F A I Z A N             | | "
    << endl;

  cout <<
    "\t\t| |                                                           | | "
    << endl;

  cout <<
    "\t\t| |             20i 2315 , 20i 1864 ,  20i 0963               | | "
    << endl;

  cout <<
    "\t\t| |___________________________________________________________| |" <<
    endl;

  cout <<
    "\t\t|_______________________________________________________________|" <<
    endl << endl;
    	
}

void clearScreen()
{
	//system("CLS"); alternative on windows
	//system("clear");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

void delay()
{
	usleep(100000);
}

void spaces(int num)
{
	int i = 0;
	while (i < num)
	{
		cout << " ";
		i++;
	}
}


void fireWorkStarter(int size, int color)
{
	size /=2;
	clearScreen();
	
	for (int i = 0 ; i < size ; i++)
	{
		clearScreen();
		for (int j = (size)*3 - i ; j > 0 ; j--)
		{
			cout << endl;
		}
		for (int k = 0 ; k <= i ; k++)
		{
			spaces(size-1);
			if(color == 1)
			cout << FRED("|\n");
			else if(color == 2)
			cout << FGRN("|\n");
			else if(color == 3)
			cout << FYEL("|\n");
			else if(color == 4)
			cout << FBLU("|\n");
			else 
			cout << "|\n";
		}
	delay();
	}
	
	for (int i = 1 ; i < size ; i++)
	{
		clearScreen();
		for (int j = size - i ; j > 0 ; j--)
		{	
			spaces(size-1);
			if(color == 1)
			cout << FRED("|\n");
			else if(color == 2)
			cout << FGRN("|\n");
			else if(color == 3)
			cout << FYEL("|\n");
			else if(color == 4)
			cout << FBLU("|\n");
			else 
			cout << "|\n";
		}
		for (int k = 0 ; k < i ; k++)
		{
			cout << endl;
		}	
	delay();
	}
}

void fireWork(int size, int color)
{
	fireWorkStarter(size,color);
	size = size/2;
	
	//array initialization and declaration
	
	char grid [size] [size];
	
	for (int y = 0; y < size; y++)
	{
		for (int x = 0; x < size ; x++)
		{
			grid [x][y] = ' ';
		}
	}

	int xaxis = 0, yaxis = 0;
	
	// saving points to be printed with a *
	
	for(int i = 0; i < size ; i++)
	{		
		grid [xaxis][xaxis] = '*'; //y=x
		grid [xaxis][0] = '*'; // x=0
		grid [0][xaxis] = '*'; // y=0
		
		if(size > 19/2 )
		{
			yaxis = xaxis / 2; 
			grid [xaxis][yaxis] = '*'; //y=x/2
			
			yaxis = xaxis * 4;
			if (yaxis < size) 
			{
			grid [xaxis][yaxis] = '*'; //y=4x
			}
			
			yaxis = xaxis * 2;
			if (yaxis < size)
			{
			grid [xaxis][yaxis] = '*'; //y=2x
			}
		}
		xaxis ++;
	}
	
	//outputing firework	
	for(int i = 0; i < size ; i++)
	{
		delay();
		clearScreen();
		
		
		for(int x = i ; x >= 0 ; x--)
		{	
			for (int j = size ; j > i+1 ; j--)
			{
				cout << " ";
			}
			for (int y = i; y >= 0 ; y--)
			{
				
				if ( /*grid [x] [y]*/ *(*(grid+x)+y) == '*')
				{
					if(color == 1)
					cout << FRED("*");
					else if(color == 2)
					cout << FGRN("*");
					else if(color == 3)
					cout << FYEL("*");
					else if(color == 4)
					cout << FBLU("*");
					else 
					cout << "*";
				}
				else 
				{
					cout << " ";
				}
			}
			for (int y = 1; y <= i ; y++) 
			{
				if (*(*(grid+x)+y) == '*')
				{
					if(color == 1)
					cout << FRED("*");
					else if(color == 2)
					cout << FGRN("*");
					else if(color == 3)
					cout << FYEL("*");
					else if(color == 4)
					cout << FBLU("*");
					else 
					cout << "*";
				}
				else 
					cout << " ";
			}
			
			cout << endl;
		}
		
		for(int x = 0 ; x < i  ; x++)
		{	
			for (int j = size ; j > i+1 ; j--)
				{
					cout << " ";
				}
				
			for (int y = i; y >= 0 ; y--)
			{
				if (/*grid [x+1] [y]*/ *(*(grid+x+1)+y) == '*')
				{
					if(color == 1)
					cout << FRED("*");
					else if(color == 2)
					cout << FGRN("*");
					else if(color == 3)
					cout << FYEL("*");
					else if(color == 4)
					cout << FBLU("*");
					else 
					cout << "*";
				}
				else 
					cout << " ";
			}
			for (int y = 1; y <= i ; y++)
			{
				if (*(*(grid+x+1)+y) == '*')
				{
					if(color == 1)
					cout << FRED("*");
					else if(color == 2)
					cout << FGRN("*");
					else if(color == 3)
					cout << FYEL("*");
					else if(color == 4)
					cout << FBLU("*");
					else 
					cout << "*";
				}
				else 
					cout << " ";
			}
			cout << endl;
		}
		for (int j = size-2 ; j >= i ; j--)
		{
			cout << "\n";
		}

	}	
}
