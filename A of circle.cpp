#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float r,A;
	const float PI = 3.14159;
	cout << "Enter radius" << endl;
	cin >> r;
	A = PI * pow(r,2);
	cout << "The area of circle of radius " << r << " units is " << A << " units" << endl;
	return 0; 
}
