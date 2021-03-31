#include<iostream>
using namespace std;

const int COEF_FD = 12;
const double COEF_IM = 0.0254;
const double COEF_PKG = 2.2;

int main()
{
	int feet, inch, pound;

	cout << "Enter your height in feet and inches\nFeet: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inch;
	cout << "Input your weight in pounds: ";
	cin >> pound;

	inch += feet * COEF_FD;
	double metr = inch * COEF_IM;
	double kg = pound / COEF_PKG;
	double bmi = kg / pow(metr, 2);

	cout << "Your bmi: " << bmi << endl;
	
	return 0;
}