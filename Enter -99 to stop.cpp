#include <iostream>
using namespace std;
int main()
{
	int num,
	count = 0;
	double sum = 0;
	while (true)
	{
		cin >> num;
		if (num == -99)
		{
			break;
		}
		if (num > 0)
		{
			sum = sum + num;
			count ++;
		}
		else
		{
			cout << "Please enter positive numbers" << endl;
		}
	}
	if (count > 0)
	{
		double average = (double) sum / count;
		cout << "Sum = " << sum << endl;
		cout << "Average = " << average << endl;
	}
	else
	{
		cout << "No positive numbers entered" << endl;	
	}
	return 0;
}
