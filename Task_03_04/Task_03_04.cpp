#include<iostream>
using namespace std;

int main()
{
	const int COEF_MIN = 60;
	const int COEF_HOUR = 60;
	const int COEF_DAY = 24;

	long long sec;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	cout << sec;

	int min = sec / COEF_MIN;
	sec %= COEF_MIN;
	int hour = min / COEF_HOUR;
	min %= COEF_HOUR;
	int day = hour / COEF_DAY;
	hour %= COEF_DAY;
	
	cout << " seconds = " << day << " days, " << hour << " hours, " 
		<< min << " minutes, " << sec << " seconds\n";

	return 0;
}