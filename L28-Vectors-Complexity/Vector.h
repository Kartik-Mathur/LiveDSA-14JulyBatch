#ifndef MyVECTOR
#define MyVECTOR

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


#endif