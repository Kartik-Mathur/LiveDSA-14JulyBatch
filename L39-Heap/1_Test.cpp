#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	vector<int> v;

	void heapify(int i) {
		int mi = i;
		int left = 2 * i;
		int right = 2 * i + 1;

		if (left < v.size() and v[left] < v[mi]) {
			mi = left;
		}
		if (right < v.size() and v[right] < v[mi]) {
			mi = right;
		}

		if (i != mi) { // Base case: Because it stops the recursion calling
			swap(v[i], v[mi]);
			heapify(mi);
		}
	}

public:
	Minheap() {
		v.push_back(-1); // 0th index par -1 daal kar usse block krdo
		// I would consider my heap as empty if it contains 1 element in the vector.
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;

		while (p > 0 and v[p] > v[c]) { // O(logN) -> We iterate only on the height of tree
			swap(v[p], v[c]);
			c = p; // or c = c/2;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();

		heapify(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

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
















