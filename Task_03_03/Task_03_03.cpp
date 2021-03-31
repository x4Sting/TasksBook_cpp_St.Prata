#include<iostream>
using namespace std;

int main()
{
	const int COEF_DM = 60;
	const int COEF_MS = 60;
	double degree, min, sec;
	
	cout << "Enter a latitude in degrees, minutes, and seconds: ";
	cout << "\nFirst, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;

	double degDecimal = degree + min / COEF_DM + sec / COEF_MS / COEF_DM;

	cout << degree << " degrees, " << min << " minutes, " << sec << " seconds = " << degDecimal << endl;

	return 0;
}