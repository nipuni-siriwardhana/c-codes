#include <iostream>
using namespace std;
int main()
{
	int num1,num2,sum,sub,product,div,mod;
	cout << "Enter first number:" << endl;
	cin >> num1;
	cout << "Enter second number:" << endl;
	cin >> num2;
	sum = num1 + num2;
	cout << "Sum =" << sum <<endl;
	sub = num1 - num2;
	cout << "Subtraction =" << sub <<endl;
	product = num1 * num2;
	if (num1 !=0 || num2 !=0)
	{
		cout << "Multipication =" << product <<endl;
	}
		else
	{
		cout << "Multipication by 0 is not allowed" << endl;
		}
	
	if (num2 !=0)
	{
		div = num1 / num2;
		cout << "Division =" << div <<endl;
		}
	else
	{
		cout << "Division by 0 is not allowed" << endl;
		}	
	if (num2 !=0)
	{
		mod = num1 % num2;
		cout << "Modulus =" << mod <<endl;
		}
	else
	{
		cout << "Modulus by 0 is not allowed" << endl;
		}
	return 0;	
}
