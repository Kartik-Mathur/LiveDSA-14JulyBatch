#include <iostream>
using namespace std;

//////////////////////////////////// BLUE-PRINT ////////////////////////////////////
class Car {
public:
	char name[100];
	int price;
	int model;

	// Default CONSTRUCTOR
	Car() {
		cout << "Inside Default Constructor\n";
	}

	// Parameterized Constructor
	Car(char *n, int p, int m) {
		cout << "Inside Parameterized Constructor\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// Parameterized Constructor-2
	Car(int p, int m, char *n) {
		cout << "Inside Parameterized Constructor-2\n";
		strcpy(name, n);
		price = p;
		model = m;
	}

	// Copy Constructor
	// Car D = A;
	Car(Car &X) {
		cout << "Inside Copy Constructor\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// Copy Assignment Operator
	// D = A;
	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator\n";
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	// Destructor Function
	// Tilde Operator
	~Car() {
		cout << "Deleting Car: " << name << endl;
	}

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
	A.price = -100;
	A.model = 2020;

	char carName[] = "Audi";
	Car B(carName, 20, 2022);
	Car C(30, 2024, "Maruti");
	// Copy Constructor: To create new car object using existing car
	// 1. Car A = B;
	// 2. Car A(B);
	Car D = A;

	// Copy Assignment Operator
	// D = C;
	/*
	Car B;
	strcpy(B.name, "Audi");
	B.price = 20;
	B.model = 2022;
	*/
	A.print();
	B.print();
	C.print();
	D.print();


	return 0;
}
















