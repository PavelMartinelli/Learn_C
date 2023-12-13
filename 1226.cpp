/*#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string res = "";
	for (int i = 0; i < 1000; i++) {
		string word = ""; string l; getline(cin, l); bool fl = false;
		if (l[0] == EOF) {
			res = res + word;
			fl = true;
			break;
		}
		if (l == "") {
			res = res + "\n";
			continue;
		}
		for (size_t j = 0; j < size(l); j++) {
			if (('a' <= l[j] && l[j] <= 'z') || ('A' <= l[j] && l[j] <= 'Z')) {
				word = l[j] + word;
			}
			else if (l[j] != EOF) {
				res = res + word + l[j];
				word = "";
			}
			else {
				res = res + word;
				word = "";
				fl = true;
				break;
			}
		}
		if (fl) {
			break;
		}
		res = res + word;
		res = res + "\n";
	}
	int f = size(res);
	while (res[f - 1] == '\n') {
		res.pop_back();
		f = f - 1;
	}
	cout << res;
}*/