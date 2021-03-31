#include<iostream>
using namespace std;

int main()
{
	int km, liter;

	cout << "Enter the distance in kilometers: ";
	cin >> km;
	cout << "Enter the volume of gasoline in liters: ";
	cin >> liter;

	double consumption = double(liter) / km * 100;

	cout << "The number of liters per 100 kilometers: " << consumption << endl;
	return 0;
}