#include <iostream>
using namespace std;

int main() {
	int a[100][100];
	int num = 1, rows, cols;
	cout << "Enter number of rows and cols(MAX:100) : ";
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			a[i][j] = num;
			num++;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int key;
	cout << "Enter key to search : ";
	cin >> key;

	bool keyFound = false;

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			if (a[i][j] == key) {
				cout << "Key found " << i << ", " << j << endl;
				keyFound = true; // mark key found as true, so that we can exit ith loop as well
				break;
			}
		}

		if (keyFound == true) {
			break; // Break the loop of i as well since we have found the key....
		}
	}

	// outside the loop of i we will do this, if flag is not set to true that means
	// key is not found..
	if (keyFound == false) {
		cout << "Key not found\n";
	}

	return 0;
}
















