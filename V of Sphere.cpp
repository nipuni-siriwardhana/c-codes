#include <iostream>
using namespace std;
int main()
{
	float r,V;
	double PI = 3.14;
	cout << "Enter radius:" << endl;
	cin >> r;
	V = (4/3) * PI * r * r * r;
	cout << "Volume is:" << V << endl;
	return 0;
}
