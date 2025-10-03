#include <iostream>
using namespace std;

//////////////////////////////////// BLUE-PRINT ////////////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;
};
//////////////////////////////////// BLUE-PRINT ////////////////////////////////////



int main() {

	Car A; // A is an object of class Car

	strcpy(A.name, "BMW");
	A.price = 10;
	A.model = 2020;


	Car B;
	strcpy(B.name, "Audi");
	B.price = 20;
	B.model = 2022;

	cout << "Name   : " << A.name << endl;
	cout << "Price  : " << A.price << endl;
	cout << "Model  : " << A.model << endl << endl;

	cout << "Name   : " << B.name << endl;
	cout << "Price  : " << B.price << endl;
	cout << "Model  : " << B.model << endl << endl;


	return 0;
}
















