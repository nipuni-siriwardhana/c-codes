#include <iostream>
using namespace std;
int main()
{
	float a,b,h,A;
	cout << "Enter length of large side:" << endl;
	cin >> a;
	cout << "Enter length of small side:" << endl;
	cin >> b;
	cout << "Enter height:" << endl;
	cin >> h;
	A = (a + b)/2*h;
	cout << "Area of Trapezoid is:" << A << endl;
	return 0;
}
