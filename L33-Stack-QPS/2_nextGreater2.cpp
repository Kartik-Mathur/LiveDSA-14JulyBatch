class Solution {
public:
	vector<int> nextGreaterElements(vector<int>& nums) {
		int n = nums.size();

		for (int i = 0; i < n; ++i)
		{
			nums.push_back(nums[i]);
		}

		stack<int> s;

		for (int i = 0; i < 2 * n; ++i)
		{
			while (!s.empty() and a[s.top()] < a[i]) {
				ng[s.top()] = i;
				s.pop();
			}

			s.push(i);
		}

		while (!s.empty()) {
			ng[s.top()] = -1;
			s.pop();
		}

		vector<int> ans;
		for (int i = 0; i < n; ++i)
		{
			int nextGreaterindx = ng[i];
			if (nextGreaterindx != -1) {
				ans.push_back(nums[nextGreaterindx]);
			}
			else {
				ans.push_back(-1);
			}
		}

		return ans;

	}
};