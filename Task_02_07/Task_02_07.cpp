#include<iostream>
using namespace std;

void time(int min, int hour);

int main()
{
	int hour, min;

	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	time(min, hour);

	return 0;
}
void time(int min, int hour)
{
	cout << "Time: " << hour << ":" << min << endl;
}