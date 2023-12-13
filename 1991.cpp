/*#include <iostream>
#include "cmath"
#include <string>
using namespace std;

int main() {
	int n, k, cur, bum = 0, droid = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> cur;
		if (cur > k)
			bum += (cur - k);
		else
			droid += (k - cur);
	}
	cout << bum << " " << droid << endl;
	return 0;
}*/