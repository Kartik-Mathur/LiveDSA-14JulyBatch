#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

class Pair {
public:
	int value;
	int span;
};

class StockSpanner {
public:
	stack<Pair> s;
	StockSpanner() {

	}

	int next(int price) {
		int cspan = 1;
		while (!s.empty() and s.top().value <= price) {
			cspan += s.top().span;
			s.pop();
		}

		Pair p;
		p.span = cspan;
		p.value = price;
		s.push(p);
		return cspan;
	}
};

int main() {
	// ["StockSpanner", "next", "next", "next", "next", "next", "next", "next"]
	// [[], [100], [80], [60], [70], [60], [75], [85]]
	string s[100] = {
		"StockSpanner", "next", "next", "next", "next", "next", "next", "next",
		"StockSpanner", "next", "next", "next"
	};

	int price[] = {0, 100, 80, 60, 70, 60, 75, 85,
	               0, 90, 80, 85
	              };

	int n = sizeof(price) / sizeof(int);

	StockSpanner *obj = NULL;

	for (int i = 0; i < n; ++i)
	{
		string x = s[i];
		if (x == "StockSpanner") {
			// Create an Object of class
			if (obj) delete obj;

			obj = new StockSpanner();
			cout << endl << "Next Input Data: ";
		}
		else {
			int p = price[i];
			cout << obj->next(p) << " ";
		}
	}


}


















