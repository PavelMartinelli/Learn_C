/*#include <iostream>
#include "cmath"
#include <string>
using namespace std;

int main() {
	string s;
	string res;
	while (	getline(cin, s)) {
		for (int i = 0; i < s.length(); ++i) {
			if (isalpha(s[i]))
				s[i] = tolower(s[i]);
			else if (s[i] == '.' || s[i] == '?' || s[i] == '!')
				i += 2;
		}
		res = s + '\n';
	}
	cout << res;
	return 0;
}*/