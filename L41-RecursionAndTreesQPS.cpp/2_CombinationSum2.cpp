class Solution {
public:
	vector<vector<int> > ans;

	void solve(vector<int> &ip, vector<int> &op, int i, int target) {
		if (target == 0) {
			ans.push_back(op);
			return;
		}

		if (i == ip.size()) {
			return;
		}

		for (int j = i; j < ip.size(); ++j)
		{
			// i and j are not equal aur j apne pehle wale index ke barabar hai toh isse nhi lena
			if (i != j and ip[j] == ip[j - 1]) continue;

			if (ip[j] <= target) {
				op.push_back(ip[j]);
				solve(ip, op, j + 1, target - ip[j]);
				op.pop_back();
			}
		}
	}

	vector<vector<int> > combinationSum2(vector<int>& ip, int target) {
		vector<int> op;
		sort(ip.begin(), ip.end());
		solve(ip, op, 0, target);

		return ans;
	}
};





















