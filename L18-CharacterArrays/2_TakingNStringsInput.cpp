#include <iostream>
using namespace std;

int main() {
	char a[100];
	int n;
	cin >> n;
	// because cin ke baad immediately cin.getline() lagaya hai that means
	// we need to ignore  one character that is entered after cin
	cin.ignore(); // It will ignore the character that use enters after number


	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		cout << a << endl;
	}

	return 0;
}
