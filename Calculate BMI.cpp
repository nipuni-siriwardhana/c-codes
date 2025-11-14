#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float w, h, f;
	cout << "Enter weight: " << endl;
	cin >> w;
	cout << "Enter height: " << endl;
	cin >> h;
	f = w / pow(h,2);
	cout <<"The BMI of person is: " << f << endl;
	if (f<=18.5)
	{
		cout <<"The category is Under Weight " << endl;	
	}
	else if (f<=25)
	{
		cout <<"The category is Healthy Weight " << endl;	
	}
	else if (f<=30)
	{
		cout <<"The category is Over Weight " << endl;	
	}
	else
	{
		cout <<"The category is Obese " << endl;	
	}
	return 0;
}
