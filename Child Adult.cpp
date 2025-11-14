#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter age: " << endl;
	cin >> age;
	cout << (age > 18 ? "The person is an adult." : "The person is a child.") << endl;
	return 0;
}
