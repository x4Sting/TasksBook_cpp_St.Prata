#include<iostream>
using namespace std;

int main()
{
	const double COEF_KMM = 62.14;
	const double COEF_GL = 3.785;
	const double COEF = COEF_GL * COEF_KMM;

	double consumptionEU;

	cout << "Enter gasoline consumption per 100 km: ";
	cin >> consumptionEU;

	double consumptionUS = COEF / consumptionEU;
	
	cout << consumptionEU << " liters per 100 km equals " << consumptionUS << " mpg\n";

	return 0;
}