/*#include <iostream>
#include "cmath"
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string** name = new string*[n];
	string a, b, c;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> c;
		if (a > b)
			swap(a, b);
		if (b > c)
			swap(b, c);
		if (a > b)
			swap(a, b);
		name[i] = new string[3];
		name[i][0] = a;
		name[i][1] = b;
		name[i][2] = c;
	}

	int* num = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> num[i];
	}

	string* res = new string[n];
	a = "a";

	for (int i = 0; i < n - 1; i++) {
		int k = num[i] - 1;
		if (a < name[k][0]) {
			res[i] = name[k][0];
			a = res[i];
			continue;
		}
		else if (a < name[k][1]) {
			res[i] = name[k][1];
			a = res[i];
			continue;
		}
		else if (a < name[k][2]){
			res[i] = name[k][2];
			a = res[i];
			continue;
		}
		cout << "TMPOSSIBLE" << endl;
		return 0;
	}

	for (int i = 0; i < n; ++i)
		cout << res[i] << endl;
	return 0;
}*/