class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		stack<int> s;
		int n = heights.size();
		vector<int> ps(n), ns(n);

		ps[0] = -1;
		s.push(0);
		for (int i = 1; i < n; ++i)
		{
			while (!s.empty() and heights[s.top()] >= heights[i]) {
				s.pop();
			}

			if (s.empty()) {
				ps[i] = -1;
			}
			else {
				ps[i] = s.top();
			}

			s.push(i);
		}
		// Stack khaali kardo taaki same stack ko use kar sakey to find next smaller
		while (!s.empty()) {
			s.pop();
		}

		// Finding next smaller for all the buildings....
		ns[n - 1] = n;
		s.push(n - 1);
		for (int i = n - 2; i >= 0; --i)
		{
			while (!s.empty() and heights[s.top()] >= heights[i]) {
				s.pop();
			}

			if (s.empty()) {
				ns[i] = n;
			}
			else {
				ns[i] = s.top();
			}

			s.push(i);
		}

		// We dont need stack any longer
		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int len = ns[i] - ps[i] - 1;
			int area = len * heights[i];
			ans = max(ans, area);
		}

		return ans;
	}
};









