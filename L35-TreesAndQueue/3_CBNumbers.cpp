#include <iostream>
using namespace std;
#define int long long

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int primes_len = 10;

bool isCBNumber(string &x) {
	if (x.size() == 0 || x == "0" || x == "1") {
		return false;
	}

	int no = stoll(x); // string ko long long integer mei convert kro..

	// if no is a prime number mentioned in the list of primes[] then also its a CB number
	for (int i = 0; i < primes_len; ++i)
	{
		if (no == primes[i]) {
			return true; // CB number hoga yeh....
		}
	}

	// O(1) time only, why because we will do this only 10 times
	// 10 times loop is considered constant time only..
	for (int i = 0; i < primes_len; ++i)
	{
		if (no % primes[i] == 0) { // kisi bhi ek prime number se divide hua toh
			// CB number nhi ho skta
			return false;
		}
	}

	// Loop ke bahar aa gaye means kisi bhi prime number se divide nhi hua thus a CB number
	return true;
}

int CBNumberMaxCount(string s) {
	// base case
	if (s.size() <= 0) {
		return 0; // empty string cannot have any CB numbers in it
	}

	// recursive case
	int ans = 0;
	// 0th character ko include krke kya mere pass max CB numbers bann paa rhey hai find kro
	for (int i = 1; i <= s.size(); ++i)
	{
		string x = s.substr(0, i);
		if (isCBNumber(x) == true) {
			ans = max(ans, 1 + CBNumberMaxCount( s.substr(i) ) );
		}
	}

	// 0th character ko bina include krey kya mere pass bann rhey hai maximum CB numbers
	ans = max(ans, CBNumberMaxCount(s.substr(1))); // 0th character ko hata kar, choti string h
	// ask recursion to do this
	return ans;
}


int32_t main() {
	string s;
	int len;
	cin >> len;
	cin >> s;
	if (s == "0" || s == "1") {
		cout << 0 << endl;
		return 0; // "0" and "1" are not CB Numbers given in the question itself..
	}

	// cout << stoi(s) << endl; // yeh string ko integer mei convert krta hai...

	cout << CBNumberMaxCount(s) << endl;


	return 0;
}
















