class Solution {
public:
	vector<string> ans;
	void solve(string &x, int n, int open = 0, int close = 0) {

		if (x.size() == 2 * n) {
			ans.push_back(x);
			return;
		}

		if (open < n) {
			x.push_back('(');
			solve(x, n, open + 1, close);
			x.pop_back();
		}

		if (open > close) {
			x.push_back(')');
			solve(x, n, open, close + 1);
			x.pop_back();

		}

	}

	vector<string> generateParenthesis(int n) {
		string x;

		solve(x, n);

		return ans;
	}
};