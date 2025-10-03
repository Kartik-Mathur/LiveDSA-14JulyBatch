#include <iostream>
using namespace std;

//////////////////////////////////// BLUE-PRINT ////////////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl << endl;
	}
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

	A.print();
	B.print();


	return 0;
}
















