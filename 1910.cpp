/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main() {

	int n, maxs, s, i, ians = 2;

	cin >> n;
	int* wall = new int[n];
	for (i = 0; i < n; i++) {
		cin >> wall[i];
	}
	maxs = wall[0] + wall[1] + wall[2];
	for (i = 1; i < n - 2; i++) {
		s = wall[i] + wall[i + 1] + wall[i + 2];
		if (s > maxs) {
			maxs = s;
			ians = i + 2;
		}
	}
	cout << maxs << " " << ians;

    return 0;
}*/