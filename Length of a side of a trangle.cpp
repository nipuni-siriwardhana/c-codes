#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	const float PI = 3.14;
	double angleRad, angleDeg, a, b, c;
	cout << "Enter the angle: " << endl;
	cin >> angleDeg;
	cout << "Enter the length of side A: " << endl;
	cin >> a;
	cout << "Enter the length of side B: " << endl;
	cin >> b;
	angleRad = angleDeg / 180 * PI;
	c = sqrt (pow (a,2) + pow (b,2) - 2 * a * b * cos (angleRad));
	cout << "The length of side C is: " << c << endl;
	 return 0;
}
