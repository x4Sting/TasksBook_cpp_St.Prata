#include<iostream>
using namespace std;

double convertCelsToFrnh(double cels);

int main()
{
	cout << "Please enter a Celsius value: ";
	double cels;
	cin >> cels;
	cout << cels << " degrees Celsius is " << convertCelsToFrnh(cels) << " degrees Fahrenheit.\n";

	return 0;
}
double convertCelsToFrnh(double cels)
{
	return cels * 1.8 + 32;
}