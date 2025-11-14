#include <iostream>
using namespace std;
int main()
{
	string name;
	double hoursWorked, rate_per_hour, totalPay;
	do
	{
		cout << "Enter employee name: " << endl;
		cin >> name;
		if (name != "END")
		{
			cout << "Enter no.of hours worked: " << endl;
			cin >> hoursWorked;
			cout << "Enter rate per hour: " << endl;
			cin >> rate_per_hour;
			
			totalPay = hoursWorked * rate_per_hour;
			cout << "Total pay for name = " << name<< "is: " << totalPay << endl;
		}
	}
	while (name != "END");
	cout << "Program ended" << endl;
	return 0;
}
