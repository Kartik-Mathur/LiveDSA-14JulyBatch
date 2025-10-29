#define ll long long
class Tuple {
public:
	string str;
	ll si;
	ll len;
	Tuple() {
		str = "";
		si =  0;
		len = 0;
	}
};

class Solution {
public:
	string decodeAtIndex(string str, ll k) {
		stack<Tuple> s;
		ll len = 0;
		Tuple t;

		for (ll i = 0; i < str.size(); ++i)
		{
			if (isalpha(str[i])) { // this means current character is an alphabet
				t.str += str[i];
				len++;

				if (len == k) return string(1, str[i]);
			}
			else { // this means current character is a digit..
				ll digit = str[i] - '0';
				len *= digit;
				t.len = len;
				s.push(t);

				if (len > k) { // mill gaya vo index jo dhoondh rhey hai hum log..
					break;
				}

				t.si = len;
				t.str = "";
			}
		}



		// Now it is time to find the kth position character here......
		while (!s.empty()) {
			Tuple t = s.top();
			s.pop();

			string str = t.str;
			ll si = t.si;
			ll strlen = str.length();

			k = k % (si + strlen);
			if (k == 0) {
				k = si + str.length();
			}
			if (k > si) {
				return string(1, str[k - si - 1]);
			}
		}


		return "";
	}
};























