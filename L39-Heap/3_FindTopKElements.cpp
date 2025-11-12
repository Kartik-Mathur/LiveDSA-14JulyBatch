#include <iostream>
#include <queue>
#include <functional>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

	int cs = 0;
	int k = 3;

	priority_queue<int, vector<int>, greater<int> > h; // Minheap
	while (true) {
		int data;
		cin >> data;


		if (data == -1) { // Print top k elements
			printHeap(h);
		}
		else {
			if (cs < k) {
				h.push(data);
				cs++;
			}
			else { // This means we have k elements in the heap
				if (data > h.top()) {
					h.pop();
					h.push(data);
				}
			}
		}
	}


	return 0;
}
















