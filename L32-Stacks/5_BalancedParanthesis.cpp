#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string &str) {
	stack<char> s;

	for (int i = 0; i < str.size(); ++i)
	{
		char ch = str[i];
		switch (ch) {
		case '(':
		case '{':
		case '[':
			s.push(ch);
			break;
		case ')':
			if (!s.empty() and s.top() == '(') s.pop();
			else return false;
			break;
		case '}':
			if (!s.empty() and s.top() == '{') s.pop();
			else return false;
			break;
		case ']':
			if (!s.empty() and s.top() == '[') s.pop();
			else return false;
			break;
		}
	}

	// Make sure that stack is empty, because all the brackets that got opened should be closed as well
	return s.empty();
	// if (s.empty() == true) {
	// 	return true;
	// }
	// return false;
}

int main() {

	string str = "{ a + [ b+ (c + d)] + (e + f) }";

	if (isBalanced(str)) {
		cout << "Balanced\n";
	}
	else {
		cout << "Not Balanced\n";
	}

	return 0;
}
















