#include<iostream>
using namespace std;

int main()
{
	const int COEF = 220;
	cout << "Input distance in furlongs: ";
	int dist;
	cin >> dist;
	cout << dist << " furlongs equals " <<  dist* COEF << " yards."<< endl;
	return 0;
}