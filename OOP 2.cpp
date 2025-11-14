#include <iostream>
#include <cstring>
using namespace std;
class cloth {
	private: 
		int ClothNo;
		char Description[50];
		int NoofClothesAvailable;
		double Price;
		
	public: 
	cloth (int CNo, char Desc[], int available, double price )
	{
		ClothNo = CNo;
		strcpy (Description, Desc);
		NoofClothesAvailable = available;
		Price = price;
	}
	
	void makeorder (int clothNo, int quantity)
	{
		if (ClothNo != clothNo)
		{
			cout <<"Invalid cloth Number!"<<endl;
			return;
		}
		else if (NoofClothesAvailable < quantity)
		{
			cout <<"Sorry not enough available. Please wait!"<<endl;
		}
		else if (NoofClothesAvailable == 0)
		{
			cout <<"Out of Stock!"<<endl;
		}
		else {
			NoofClothesAvailable -= quantity;
			cout <<"Order Placed!"<<endl;
			cout << "Total Price: " << Price * quantity << endl;
		} 
		}
	void print ()
	{
		cout <<"ClothNo: "<< ClothNo <<endl;
		cout <<"Description: "<< Description <<endl; 
		cout <<"NoofClothesAvailable: "<< NoofClothesAvailable <<endl;
		cout <<"Price: "<< Price <<endl;
	}
	};
int main()
{
	cloth cloth_1 (1, "Tshirt", 15, 1250.00);
	cloth cloth_2 (2, "Shirt", 10, 2200.00);
	cloth cloth_3 (3, "Trouser", 0, 3180.00);

cout <<"	Placing orders	"<<endl;
cloth_1.makeorder(1,1);
cloth_2.makeorder(2,5);
cloth_3.makeorder(3,2);

cout <<"	Cloth details after orders	"<<endl;
cloth_1.print();
cloth_2.print();
cloth_3.print();

return 0;
}
