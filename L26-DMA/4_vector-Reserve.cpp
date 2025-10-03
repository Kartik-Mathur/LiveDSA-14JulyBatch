#include <iostream>
#include <vector>
using namespace std;

int main() {

	/*
		vector<int> v;
		int n;
		cin >> n;

		v.reserve(n);
	*/


	int n;
	cin >> n;
	// vector<int> v(n); // Create a vector with n numbers of buckets initially...
	vector<int> v(n, 0); // Create a vector with n numbers of buckets initially...

	cout << "Capacity: " << v.capacity() << endl;
	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> v[i];
	// }

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;

	return 0;
}
















