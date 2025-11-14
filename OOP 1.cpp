#include <iostream>
#include <cstring>
using namespace std;

// Cloth class definition
class Cloth {
private:
    int ClothNo;
    char Description[50];
    int NoofClothsAvailable;
    double Price;

public:
    // Constructor
    Cloth(int cNo, char desc[], int available, double price) {
        ClothNo = cNo;
        strcpy(Description, desc);
        NoofClothsAvailable = available;
        Price = price;
    }

    // makeorder() method
    void makeorder(int clothNo, int Quantity) {
        if (ClothNo != clothNo) {
            cout << "Invalid Cloth Number!" << endl;
            return;
        }

        if (NoofClothsAvailable == 0) {
            cout << "Out of Stock. Cannot Order!" << endl;
        }
        else if (NoofClothsAvailable < Quantity) {
            cout << "Sorry not enough available. Please wait!" << endl;
        }
        else {
            NoofClothsAvailable -= Quantity;
            cout << "Order Placed!" << endl;
            cout << "Total Price: " << Price * Quantity << endl;
        }
    }

    // print() method
    void print() {
        cout << "\nCloth No: " << ClothNo << endl;
        cout << "Description: " << Description << endl;
        cout << "Available: " << NoofClothsAvailable << endl;
        cout << "Price: " << Price << endl;
    }
};

// Main function
int main() {
    // Create 3 Cloth objects
    Cloth cloth_1(1, "T Shirt", 15, 1250.00);
    Cloth cloth_2(2, "Shirt", 10, 2200.00);
    Cloth cloth_3(3, "Trouser", 0, 3180.00);

    // Place orders
    cout << "\n--- Placing Orders ---" << endl;
    cloth_1.makeorder(1, 1);  // Order 1 T Shirt
    cloth_2.makeorder(2, 5);  // Order 5 Shirts
    cloth_3.makeorder(3, 2);  // Order 2 Trousers

    // Print details after orders
    cout << "\n--- Cloth Details After Orders ---" << endl;
    cloth_1.print();
    cloth_2.print();
    cloth_3.print();

    return 0;
}

