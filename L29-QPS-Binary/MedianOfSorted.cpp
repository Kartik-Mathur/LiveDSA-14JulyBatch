class Solution {
public:
	double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
		int n = a.size();
		int m = b.size();

		if (n > m)
		{
			return findMedianSortedArrays(b, a);
		}

		int s = 0, e = n;
		while (s <= e) {
			int mid1 = (s + e) / 2;
			int mid2 = (n + m + 1) / 2 - mid1;

			int aleft = (mid1 - 1) >= 0 ? a[mid1 - 1] : INT_MIN;
			int aright = (mid1 < n) ? a[mid1] : INT_MAX;
			int bleft = (mid2 - 1 >= 0) ? b[mid2 - 1] : INT_MIN;
			int bright = (mid2 < m) ? b[mid2] : INT_MAX;

			if (bleft <= aright && aleft <= bright) {
				// We have the correct distribution
				if ((n + m) % 2 == 1) {
					return max(aleft, bleft);
				}
				else {
					return (max(aleft, bleft) + min(aright, bright)) / 2.0;
				}
			}
			else {
				// We dont have the correct distribution
				if (aleft > bright) {
					e = mid1 - 1;
				}
				else {
					s = mid1 + 1;
				}
			}
		}

		// This will never run because we will always find median
		return -1;
	}
};