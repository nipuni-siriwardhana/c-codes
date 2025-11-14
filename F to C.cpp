#include <iostream>
using namespace std;
int main()
{
	double f,c;
	cout << "Enter temprature in Fahrenheit:" << endl;
	cin >> f;
	c = (f - 32) * 5.0/9.0;
	cout << "Temprature in celcius is " << c << endl;
	return 0;
}
