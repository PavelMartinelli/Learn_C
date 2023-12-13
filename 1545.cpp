/*#include <iostream>
using namespace std;


int main() {
	int n, cnt = 0;
	char serch;
	cin >> n;
	string* s = new string[n];
	string* res = new string[n];

	for (int i = 0; i < n; ++i)
		cin >> s[i];

	cin >> serch;

	for (int i = 0; i < n; ++i) {
		if (serch == s[i][0]) {
			res[cnt] = s[i];
			cnt++;
		}
	}
	for(int i = 0; i < cnt; ++i)
		cout << res[i] << endl;


	return 0;
}*/