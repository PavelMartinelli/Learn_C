/*#include <iostream>
#include <cmath>
using namespace std;

int get_Prime(int n) {
	if (n == 1) return 2;
	int cnt = 1;
	for (int i = 2; true; ++i) {
		bool bFlag = true;
		if ((i % 10 == 2 || i % 10 == 5) && i>5)
			continue;
		for (int j = 2; j <= sqrt(i) + 1; ++j) {
			if (i % j == 0) {
				bFlag = false;
				break;
			}
		}
		if (bFlag)
			cnt++;

		if (cnt == n)
			return i;
	}
}


int main() {
	int k, n;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		cin >> n;
		cout << get_Prime(n) << endl;
	}
	return 0;
}*/