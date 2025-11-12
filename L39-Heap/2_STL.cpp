#include <iostream>
#include <queue>
#include <functional> // header file for the greater<int> and less<int>
using namespace std;

class myComparator {
public:
	bool operator()(int a, int b) { // FUNCTOR
		return a < b;
	}
};

int main() {
	// priority_queue<int> h; // Maxheap
	// priority_queue<int, vector<int>, myComparator> h; // Minheap
	// priority_queue<int, vector<int>, greater<int> > h; // Minheap
	priority_queue<int, vector<int>, less<int> > h; // MaxHeap

	h.push(3);
	h.push(2);
	h.push(1);
	h.push(4);

	// HEAP SORT
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;


	return 0;
}


