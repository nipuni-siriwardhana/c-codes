#include <iostream>
using namespace std;
int main()
{
int x = 10, y = 20;
cout << "The value of x is " << x << endl;
cout << "The new value of x is " << x++ << endl;
cout << "Now the value of x is " << ++x << endl;
cout << "The value of y is " << y << endl;
cout << "The new value of y is " << y-- << endl;
cout << "Now the value of y is " << --y << endl;
return 0;
}
