#include <iostream>
using namespace std;
int main()
{
	int count = 0;
	double num = 0;
	double sum = 0;
	
	while (count < 5)
		{
			cout << "Enter number " << (count + 1) << ":" << endl;
			cin >> num;
			sum = sum + num;
			count ++;
			}	
		double average = sum / 5.0;
		cout << "Sum = " << sum << endl;
		cout << "Average = " << average << endl;
		return 0;
}
