// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double PI = 3.141;

int main()
{

	// Variable declaration

	int choice;

	double height, width;
	double area; 

	double radius;

	double base;

	//Program title and description for the user

	cout << "MENU TEMPLATE with IF ELSE" << endl << endl;

	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Calculate the area of a Rectangle" << endl;
	cout << "2 - Calculate the area of a Circle" << endl;
	cout << "3 - Caclulate the area of a Triangle" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Calculations

	// Output to the screen

	if (choice == 1)
	{
		cout << "Perform task #1 : Rectangle area" << endl;

		//user input		
		cout << "What is the height in cm?" << endl;
		cin >> height;
		cout << "What is the width in cm" << endl;
		cin >> width;

		// calculation
		area = height * width;

		//output 

		system("cls");
		cout << "The area is: " << area << " cm squared." << endl;

	}
	else if (choice == 2)
	{
		cout << "Perform task #2 : Circle area" << endl;

		//User input
		cout << "What is the radius of the Circle in cm?" << endl; 
		cin >> radius;

		// Calculation

		area = radius * radius * PI;

		//Output
		
		system("cls");
		cout << "The area of the circle is (approx): " << area << " cm squared." << endl;
		cout << "3.141 used as an approximation for PI" << endl;


	}
	else if (choice == 3)
	{
		cout << "Perform task #3 : Triangle area" << endl;

		//User input
		cout << "What is the base of the triangle in cm" << endl;
		cin >> base;
		cout << "What is the height of the triangle in cm" << endl;
		cin >> height;

		//Calculation
		area = (.5 * base) * height;

		//Output

		system("cls");
		cout << "The area of the triangle is: " << area << " cm squred" << endl;

	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}