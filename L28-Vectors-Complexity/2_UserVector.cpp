#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
	T *a;
	int cs, ts;

	Vector(int s = 4) {
		a = new T[s];
		cs = 0;
		ts = s;
	}

	void push_back(T d) {
		if (cs == ts) {
			T *olda = a;
			int oldts = ts;
			a = new T[2 * ts];
			ts *= 2;
			for (int i = 0; i < oldts; ++i)
			{
				a[i] = olda[i];
			}

			delete []olda;
		}

		a[cs++] = d;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ts;
	}

	// Operator Overloading
	T operator[](int indx) {
		return a[indx];
	}
};

int main() {

	Vector<char> v;
	// char c = 'A';
	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i + 64);
		// v.push_back(c);
		// c++;
	}

	cout << v.size() << ", " << v.capacity() << endl;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}
















