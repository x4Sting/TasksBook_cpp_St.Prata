#include<iostream>
using namespace std;

void writeFirstLine();
void writeSecondLine();

int main()
{
	writeFirstLine();
	writeFirstLine();
	writeSecondLine();
	writeSecondLine();
	return 0;
}
void writeFirstLine()
{
	cout << "Three blind mice\n";
}
void writeSecondLine()
{
	cout << "See how they run\n";
}