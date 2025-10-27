#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElements(vector<int>& a) {
	int n = a.size();

	stack<int> s;
	vector<int> ng(n); // Ans ko store krne ke liye hai that is needed

	for (int i = 0; i < 2 * n; ++i)
	{
		int modI = i % n;
		while (!s.empty() and a[s.top()] < a[modI]) {
			ng[s.top()] = modI;
			s.pop();
		}

		if (i < n) {
			s.push(i);
		}
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
			ans.push_back(a[nextGreaterindx]);
		}
		else {
			ans.push_back(-1);
		}
	}

	return ans;

}

int main() {

	vector<int> v = {1, 2, 3, 4, 3};

	vector<int> ans = nextGreaterElements(v);

	for (int i = 0; i < ans.size(); ++i)
	{
		cout << ans[i] << " ";
	}

	cout << endl;


	return 0;
}














