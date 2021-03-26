#include<iostream>
using namespace std;

double countAstroUnit(double year);

int main()
{
	double year;

	cout << "Enter the number of light years: ";
	cin >> year;
	cout << year << " light years = " << countAstroUnit(year) << " astronomical units.\n";

	return 0;
}
double countAstroUnit(double year)
{
	const int COEF = 63240;
	double astroUnit;
	astroUnit = year * COEF;
	return astroUnit;
}
