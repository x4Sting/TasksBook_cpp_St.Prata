#include<iostream>
using namespace std;

const short COEF = 12;

int main()
{
	cout << "Input height in inches: ___\b\b\b";
	int inch_1;
	cin >> inch_1;
	
	int feet = inch_1 / COEF;
	int inch_2 = inch_1 % COEF;

	cout << inch_1 << " inches is equal to " << feet << " feet " << inch_2 
		<< " inches\n";
	return 0;
}