class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &nums, int i, vector<int> &op) {
		// Jo bhi op ka array aaega vo mera ek answer hoga
		ans.push_back(op);

		// Base case
		if (i == nums.size()) {
			return;
		}

		for (int j = i; j < nums.size(); ++j)
		{
			if (j != i and nums[j] == nums[j - 1]) continue;
			op.push_back(nums[j]);
			solve(nums, j + 1, op);
			op.pop_back();
		}
	}

	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<int> op;
		sort(nums.begin(), nums.end());
		solve(nums, 0, op);
		return ans;
	}
};