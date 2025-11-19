class Solution {
public:
	vector<vector<int>> ans;
	void solve(vector<int> &nums, int i, vector<int> &op) {
		// Base case
		if (i == nums.size()) {
			ans.push_back(op);
			return;
		}

		// Inclusion
		op.push_back(nums[i]);
		solve(nums, i + 1, op);
		op.pop_back();
		// Exclusion
		solve(nums, i + 1, op);
	}

	vector<vector<int>> subsets(vector<int>& nums) {
		vector<int> op;
		solve(nums, 0, op);
		return ans;
	}
};