#include <iostream>
#include <string>
//#include <stdlib.h>  

using namespace std;

void calc_A_plus_B(double a, double b);

int main()
{

appStart:
	//NO FUNCTIONS HERE @@@ THIS IS JUST FOR REFERENCE

varDefinitions:
	//DEFINING SOME VARIABLES - menuItem IS A CHAR TO PROTECT AGAINST INVALID INPUT THROUGH CIN
	//I WAS GOING TO USE STRING FOR finalAnsw BUT CHAR IS SMALLER SIZE AND WILL DO THE SAME THING FOR A SIMPLE Y / N ANSWER
	double length, width, height, base, radius, area, x, y;
	char menuItem,finalAnsw;

welcomeMessage:
	//DISPLAY CUSTOM WELCOME MESSAGE AND ABOUT PAGE BEFORE JUMPING INTO THE MENU
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "###############                 WELCOME                ###############" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;

	_sleep(3000);
	system("CLS");
	//PAUSE BETWEEN SWITCHING SCREENS. INSTEAD OF SCROLLING I USE SYSTEM CLEAR TO 
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "###############          C++ Area Calculators          ###############" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "######################################################################" << endl;
	cout << "############### WRITTEN BY EGOR SHUMEYKO - FEB 8, 2017 ###############" << endl;
	cout << "######################################################################" << endl;
	
	_sleep(3000);
	system("CLS");

appMenu:

	//Add a simple number based menu to select some calculation options.
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "######################################################################" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "###############        PLEASE SELECT AN OPTION         ###############" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "######################################################################" << endl;
	cout << "############### WRITTEN BY EGOR SHUMEYKO - FEB 8, 2017 ###############" << endl;
	cout << "######################################################################" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "###############     1. RECTANGLE AREA                  ###############" << endl;
	cout << "###############     2. TRIANGLE AREA                   ###############" << endl;
	cout << "###############     3. CIRCLE AREA (PI = 3.14)         ###############" << endl;
	cout << "###############     4. TRAPEZOID AREA                  ###############" << endl;
	cout << "###############     5. SIMPLE ADDITION                 ###############" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "###############     0. EXIT                            ###############" << endl;
	cout << "###############                                        ###############" << endl;
	cout << "######################################################################" << endl;
	cout << endl;
	cout << "TYPE YOUR OPTION BELOW:" << endl;
	
	cin >> menuItem;

	if (menuItem == '1') {
		system("CLS");
		goto Calc_Area_Rectangle;
	}
	else if (menuItem == '2') {
		system("CLS");
		goto Calc_Area_Triangle;
	}
	else if (menuItem == '3') {
		system("CLS");
		goto Calc_Area_Circle;
	}
	else if (menuItem == '4') {
		system("CLS");
		goto Calc_Area_Trapezoid;
	}
	else if (menuItem == '5') {
		system("CLS");
		goto calc_A_plus_B_input;
	}
	else if (menuItem == '0') {
		system("CLS");
		goto appExit;
	}
	else {
		cout << endl << endl << "INVALID ENTRY, Plese select a correct option!" << endl;
		cin.clear();
		_sleep(2000);
		system("CLS");
		goto appMenu;
	}
	
	
//rectangle
Calc_Area_Rectangle:

	cout << "Please enter length (Numbers Only):" << endl;
	cin >> length;

	cout << endl << endl << "Please enter width (Numbers Only):" << endl;
	cin >> width;

	area = length * width;

	cout << endl << endl << endl << "The area of the rectangle is: " << area << endl << endl << endl;

	_sleep(5000);
	system("CLS");
	goto appMenu;

//triangle
Calc_Area_Triangle:

	cout << "Please enter base length (Numbers Only):" << endl;
	cin >> base;

	cout << endl << endl << "Please enter triangle height (Numbers Only):" << endl;
	cin >> width;

	area = 0.5 * base * width;

	cout << endl << endl << endl << "The area of the triangle is: " << area << endl << endl << endl;

	_sleep(5000);
	system("CLS");
	goto appMenu;

//circle
Calc_Area_Circle:

	cout << "Please enter radius length (Numbers Only):" << endl;
	cin >> radius;

	area = radius * radius * 3.14;

	cout << endl << endl << endl << "The area of the circle is: " << area << endl << endl << endl;

	_sleep(5000);
	system("CLS");
	goto appMenu;

//trapezoid
Calc_Area_Trapezoid:

	cout << "Please enter top base length (Numbers Only):" << endl;
	cin >> base;

	cout << endl << endl << "Please enter the bottom base length (Numbers Only):" << endl;
	cin >> length;

	cout << endl << endl << "Please enter the height of the trapezoid (Numbers Only):" << endl;
	cin >> height;

	area = ((base + length) / 2) * height;

	cout << endl << endl << endl << "The area of the trapezoid is: " << area << endl << endl << endl;

	_sleep(5000);
	system("CLS");
	goto appMenu;

calc_A_plus_B_input:

	cout << "Please type the number A:" << endl;
	cin >> x;
	cout << endl;
	cout << "Please type the number B:" << endl;
	cin >> y;

	calc_A_plus_B(x, y);

	//cout << "This option is still under development, please select a different option from the main menu!" << endl;
	_sleep(5000);
	system("CLS");
	goto appMenu;

appExit:

	cout << endl << "Would you like to quit? (Y|N):" << endl;

	cin >> finalAnsw;

	if (finalAnsw == 'Y' | finalAnsw == 'y')
	{
		cout << "Exiting Now..." << endl;
		_sleep(1000);
		system("CLS");
		//std::cin.ignore();
		return 0;
	}
	else if (finalAnsw == 'N' | finalAnsw == 'n' )
	{
		system("CLS");
		goto appMenu;
	}
	else {
		cout << endl << endl << "INVALID ENTRY, Plese type Y or N for your answer!" << endl;
		_sleep(2000);
		system("CLS");
		goto appExit;
	}



}

void calc_A_plus_B(double a,double b) {

	cout << endl << endl << endl << endl << endl;
	cout << "A + B = " << a + b;

}
