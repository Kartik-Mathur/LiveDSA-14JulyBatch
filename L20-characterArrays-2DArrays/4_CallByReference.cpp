#include <iostream>
using namespace std;

void update(int &x)
{
	x++;
}

void update1(int *x)
{
	*x += 10;
}

int main() {

	int a = 1;

	// update(a);
	update1(&a);

	cout << a << endl;

	return 0;
}
















