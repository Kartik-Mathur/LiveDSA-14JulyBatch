class Solution {
public:

	bool isPossible(vector<int>& piles, int h, int mid) {
		long long totalHourUsed = 0;
		for (int i = 0; i < piles.size(); ++i)
		{
			totalHourUsed += (piles[i] / mid);
			if (piles[i] % mid != 0) {
				totalHourUsed++;
			}
		}

		return totalHourUsed <= h;
	}

	int minEatingSpeed(vector<int>& piles, int h) {
		int n = piles.size();
		int s = 1;
		int e = 0;

		for (int i = 0; i < n; ++i)
		{
			e = max(e, piles[i]);
		}

		int ans;

		while (s <= e) {
			int mid = s + (e - s) / 2;

			if (isPossible(piles, h, mid)) {
				ans = mid;
				e = mid - 1;
			}
			else {
				s = mid + 1;
			}
		}

		return ans;
	}
};