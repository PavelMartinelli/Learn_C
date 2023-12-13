/*#include <iostream>
using namespace std;

bool Is_Polindrom(string s) {
	for (int i = 0; i < size(s) / 2; ++i){
		if (s[i] != s[ size(s) - i - 1])
		{
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
			if (Is_Polindrom(temp)) {
				cout << temp;
				return 0;
			}
			temp = "";
		}
		if (i == 1) 
			cout << s[0];
	}

	return 0;
}*/
//1545 
// 3 и 4 из фала свой вариант(9 номер)
//1297