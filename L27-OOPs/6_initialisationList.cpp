#include <iostream>
using namespace std;

//////////////////////////////////// BLUE-PRINT ////////////////////////////////////
class Car {
private:
	int price;

public:
	char *name;
	int model;
	const int tyres;
	static int cnt; // It belongs to class and not object that we create with class Car

	// Default CONSTRUCTOR
	Car(): tyres(4), name(NULL) {
		// name = NULL;
		// tyres = 4; // Assignment is not possible for constant buckets
		cnt++;
	}

	// Parameterized Constructor
	Car(char *n, int p, int m): tyres(4) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		cnt++;
	}

	// Parameterized Constructor-2
	Car(int p, int m, char *n): tyres(4) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		cnt++;
	}

	// Copy Constructor
	// Car D = A;
	Car(Car &X): tyres(4) {
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name;
		price = X.price;
		model = X.model;
		cnt++;
	}

	// Copy Assignment Operator
	// D = A;
	void operator=(Car &X) {
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
	}

	void print() {
		cout << "Name   : " << name << endl;
		cout << "Price  : " << price << endl;
		cout << "Model  : " << model << endl << endl;
	}

	void setPrice(int p) {
		if (p >= 160 and p < 200) {
			price = p;
		}
		else {
			price = 180;
		}
	}

	int getPrice() {
		return price;
	}

	void setName(char *n) {
		if (name != NULL) {
			delete []name;
		}

		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	~Car() {
		// cout << "Calling destructor : " << name << endl;
		// cout << "Current Car count: " << cnt << endl;
		cnt--;
	}
};
//////////////////////////////////// BLUE-PRINT ////////////////////////////////////

// Initialising the static variable
int Car::cnt = 0;

int main() {

	Car A; // A is an object of class Car

	// strcpy(A.name, "BMW");
	A.setName("BMW");
	// A.price = 10;
	A.setPrice(175);
	A.model = 2020;

	Car B = A;
	Car C = B;

	C.name[0] = 'X';

	A.print();
	B.print();
	C.print();

	cout << "Total Cars: " << A.cnt << endl;
	cout << "Total Cars: " << Car::cnt << endl;

	// Creating a car dynamically
	int *a = new int;
	float *f = new float;
	Car* D  = new Car;
	cout << "Total Cars: " << Car::cnt << endl;
	delete D;
	cout << "Total Cars: " << Car::cnt << endl;


	return 0;
}
















