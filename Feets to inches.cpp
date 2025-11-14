#include <iostream>
using namespace std;
int main()
{
	int F,I,remainingInches;
	
	cout << "Enter the distance in Inches:" << endl;
	cin >> I;
	F = I / 12;
	remainingInches = I % 12;
	cout << "The distance in feets is:" << F << "and" << I << "inches" << endl;
	return 0;
}
