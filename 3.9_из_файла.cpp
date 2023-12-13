/*#include <iostream>
#include <string>
using namespace std;

bool Is_Fuul_Squre(int n) {
	int sum = 1;
	int k = 3;
	while (true) {
		if (n == sum)
			return true;
		if (n < sum)
			return false;
		sum += k;
		k += 2;
	}
}

int Swich_Num(int n, int place, int swiched_num) {
	string s;
	s = to_string(n);
	s.replace(place, 1, to_string(swiched_num));
	return stoi(s);
}



int main() {
	int k, n, cur;
	bool bFlag;
	cin >> k;

	for (int i = 0; i < k; ++i) {
		cin >> n;
		if (Is_Fuul_Squre(n)) {
			cout << n << endl;
			continue;
		}

		if ((size(to_string(n))) == 1) {
			cout << 1 << endl;
			continue;
		}

		bFlag = true;
		for (int p = size(to_string(n))- 1; p > 0; --p) {
			for (int j = 0; j < 10; ++j) {
				cur = Swich_Num(n, p, j);
				if (Is_Fuul_Squre(cur)) {
					cout << cur << endl;
					bFlag = false;
					break;
				}
			}
		}

		if (bFlag)
			cout << "In the number " << n << " it is impossible to replace one digit so as to get a full square" << endl;
	}
	return 0;
}*/