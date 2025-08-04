#include <iostream>
using namespace std;

int main() {

	int n = 25;
	cin >> n;

	float inc = 1;
	float ans = 0;

	int j = 1;
	while (j <= 4) {

		while (ans * ans <= n) {
			ans = ans + inc;
		}

		ans = ans - inc;

		inc =  inc / 10;


		j = j + 1;
	}


	cout << "ans :" << ans << endl;



	return 0;
}
















