#include<iostream>
using namespace std;

int main()
{
	const int month = 12;
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Your age in months is " << age * month << endl;
}