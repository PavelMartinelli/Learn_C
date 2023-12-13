/*#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int** matrix = new int*[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << matrix[i - j][j] << " ";
		}
	}

	for (int i = n; i < (2 * n - 1); i++) {
		for (int j = (n - 1); j >= (i - (n - 1)); j--)
			cout << matrix[j][i - j] << " ";
	}

	return 0;

} */

//волшебник 1370
//предохранители 1327
//1215