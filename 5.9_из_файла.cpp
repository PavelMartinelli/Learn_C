/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char odd[] = { '1', '3', '5', '7', '9' };

bool Is_odd(int& n) {
	int cnt = 0;
	string temp = to_string(n);
	for (int i = 0; i < temp.length(); ++i) {
		for (int j = 0; j < 5; ++j) {
			if (temp[i] == odd[j])
				cnt++;
		}
	}

	if (cnt == temp.length())
		return true;
	else
		return false;
}

int main() {
	int n, k;
	ifstream fin("in.txt");
	ofstream fout("out.txt");

	fin >> k;
	for (int i = 0; i < k; ++i) {
		fin >> n;
		if (Is_odd(n))
			fout << n << " ";
	}

	fout.close();
	return 0;
}*/