/*#include <iostream>
using namespace std;

bool Is_Alpx(string s) {
	for (int i = 0; i < size(s) - 1; ++i){
		if (s[i] >= s[i+1]){
			return false;
		}
	}
	return true;
}


int main() {
	string s , temp;
	cin >> s;
	int n = size(s);


	for (int i = n; i > 0; --i) {
		for (int j = 0; j <= n - i; ++j) {
			for (int k = j; k <= j + i; ++k) {
				temp += s[k];
			}
			if (Is_Alpx(temp)) {
				cout << temp << endl;
				return 0;
			}
			temp = "";
		}
		if (i == 1)
			cout << s[0] << endl;
	}

	return 0;
}*/