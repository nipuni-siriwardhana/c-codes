#include <iostream>
using namespace std;
int main()
{
	int num1, num2, temp;
	cout << "Enter first number:" << endl;
	cin >> num1;
	cout << "Enter second number:" << endl;
	cin >> num2;
	cout << "Before swapping a = " << num1 << " b = " << num2 << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "After swapping a =" << num1 << " b = " << num2 << endl;
	return 0;
}
