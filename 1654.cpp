/*#include <iostream>
#include "cmath"
#include <string>
using namespace std;

int main() {
	string s, res;
	cin >> s;
	int l = size(s);
	int k = 0;
	char* st = new char[l];
	char ch;
	
	for (int i = 0; i < l; i++) {
		ch = s[i];
		if (k) {
			if (ch == st[k - 1]) {
				k--;
				continue;
			}
		}
		st[k++] = ch;
	}
	for (int i = 0; i < k; i++)
		cout << st[i];
	return 0;
}*/