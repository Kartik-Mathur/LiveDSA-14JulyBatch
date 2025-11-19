class Solution {
public:
	vector<vector<string>> ans;

	bool isPalindrome(string &x) {
		int i = 0, j = x.size() - 1;
		while (i < j) {
			if (x[i] != x[j]) {
				return false;
			}
			i++;
			j--;
		}

		return true;
	}

	void solve(string s, vector<string> &op) {
		if (s.size() == 0) {
			ans.push_back(op);
			return;
		}

		for (int len = 1; len <= s.size(); ++len)
		{
			string x = s.substr(0, len);
			if (isPalindrome(x)) {
				op.push_back(x);
				solve(s.substr(len), op);
				op.pop_back();
			}
		}
	}

	vector<vector<string>> partition(string s) {
		vector<string> op;
		solve(s, op);

		return ans;
	}
};