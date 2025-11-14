#include <iostream>
using namespace std;
int main()
{
 int x = 5, y = 10;
 cout<<"Prints 1 if x>=5 and 0 if x<5 answer is "<<(x<5)<<endl;
 cout<<"Prints 1 if y==10 and 0 if y!=10 answer is "<<(y==10)<<endl;
 cout<<"Prints 1 if y>=10 and 0 if y<10 answer is "<<(y<10)<<endl;
 cout<<"Prints 1 if x>=5 and 0 if x<5 answer is "<<(x>=5)<<endl;
 cout<<"Prints 1 if x>=5 and y==10 answer is "<<((x>=5)&&(y==10))<<endl;
 cout<<"Prints 1 if x<5 or y==10 answer is "<<((x<5)||(y==10))<<endl;
 return 0;
}
