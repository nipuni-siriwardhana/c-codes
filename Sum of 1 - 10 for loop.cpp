#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (int no = 1; no <= 10; no++)   
    {
        sum += no;                     
    }

    cout << "Sum of numbers from 1 to 10 is: " << sum << endl;

    return 0;
}
