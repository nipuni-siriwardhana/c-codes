#include <iostream>
using namespace std;
int main()
{
	int a,b,c,T;
	cout << "Enter the value of 3 angles: " << endl;
	cin >> a >> b >> c;
	if (a==0 || b==0 || c==0)
	{
		cout << "Angle value cannot be zero " << endl;
	}
	else if (a + b + c == 180)
	{
		cout << "Triangle is valid " << endl;
	}
	else
	{
	 	cout << "Triangle is not valid " << endl;
	}
	 return 0; 
}
