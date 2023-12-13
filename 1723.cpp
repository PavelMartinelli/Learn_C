/*#include <iostream>
using namespace std;

int main() {
	string s;
	int n[26] = { 0 };
	cin >> s;
	for (int i = 0; i < size(s); i++) {
		n[s[i] - 'a']++;
	}

	char maxe = 'a';
	for (char el = 'b'; el <= 'z'; el++) {
		if (n[maxe - 'a'] <= n[el - 'a'])
			maxe = n[el - 'a'];
	}

	cout << maxe << endl;
	return 0;
}*/