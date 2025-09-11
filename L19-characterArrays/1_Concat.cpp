#include <iostream>
#include <cstring>//strlen, strcat
using namespace std;

void concat(char a[], char b[]) {
	int lena = strlen(a);
	int lenb = strlen(b);
	int j = 0, i = lena;

	while (j <= lenb) {
		a[i] = b[j];

		i++;
		j++;
	}
}

int main() {

	char a[100] = "hi";
	char b[100] = "world";
	char c[100] = "How are you?";

	// concat(a, b);
	// cout << a << endl;

	cout << strcat(a, b) << endl; // Inbuilt function
	cout << strcat(a, c) << endl; // Inbuilt function
	cout << a << endl;

	return 0;
}
















