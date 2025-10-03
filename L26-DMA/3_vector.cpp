#include <iostream>
#include <vector> // Standard Template Library
using namespace std;

int main() {

	vector<int> v;

	for (int i = 1; i <= 5; ++i)
	{
		v.push_back(i);
		cout << "Inserted: " << i << ", Size: " << v.size() << ", Cap: " << v.capacity() << endl;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << ' ';
	}
	cout << endl;


	return 0;
}
















