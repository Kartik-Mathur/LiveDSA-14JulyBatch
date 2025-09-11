#include <iostream>
using namespace std;

int main() {

	int a[] = {1};
	int n = sizeof(a) / sizeof(int);
	if (n == 0) { // corner case
		cout << "Empty Subarray hoga, Sum : " << 0 << endl;
		return 0;
	}

	int ans = INT_MIN;// or we can also take a[0]
	int si, ei;

	// All the subarrays
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// Before we are iterating over the subarray ek bucket lelo jismei sum find krenge
			int subArraySum = 0;

			for (int k = i; k <= j; ++k)
			{
				// cout << a[k] << " ";
				subArraySum += a[k];
			}

			// Subarray par iterate krke sum nikala hai usse print kardo
			// cout << ", SUM : " << subArraySum << endl;
			if (subArraySum > ans) { // Agar sum bada hai subarray ka ans update kro
				ans = subArraySum;
				si = i;// Jis subarray ka sum nikala hai vo i,j ki range wale index ka hai
				// us range ko bhi store karlo
				ei = j;
			}
		}
	}

	cout << "Maximum Subarray Sum: " << ans << endl;
	cout << "Index range: " << si << ", " << ei << endl;
	for (int i = si; i <= ei; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}