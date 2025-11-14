#include <iostream>
using namespace std;

int main() {
    int packageNo, distance;
    char more;

    do {
        cout << "Enter Package No (1-4): ";
        cin >> packageNo;
        cout << "Enter Total Distance (Km): ";
        cin >> distance;

        double total = 0;

        if (packageNo == 1) { // Comfort Journey
            if (distance > 0)
                total = 150 + (distance - 1) * 175;
        }
        else if (packageNo == 2) { // Budget cab Journey
            total = distance * 100;
        }
        else if (packageNo == 3) { // Crowded Journey – Dual A/C
            if (distance > 0)
                total = 130 + (distance - 1) * 150;
        }
        else if (packageNo == 4) { // Crowded Journey – Single A/C
            if (distance > 0)
                total = 120 + (distance - 1) * 130;
        }
        else {
            cout << "Invalid Package Number!!!" << endl;
            
        }

        if (total >= 0)
            cout << "Total Amount: Rs. " << total << endl;

        cout << "Do you have more customers? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    cout << "Program Terminated." << endl;
    return 0;
}
