#include<iostream>
using namespace std;

int main()
{
	long long populationEarth, populationUS;

	cout << "Enter the world's population: ";
	cin >> populationEarth;
	cout << "Enter the population of the US: ";
	cin >> populationUS;

	double percent = double(populationUS) / populationEarth * 100;

	cout << "The population of the US is " << percent << "% of the world population.\n";
	return 0;
}