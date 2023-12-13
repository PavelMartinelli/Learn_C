/*#include <iostream>
using namespace std;

int main() {
	int n, m, temp, temp_1;
	cin >> n >> m;
	m = m % n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];


	for (int i = 0; i < n - m; i++) {
		temp = arr[n - 1];
		temp_1 = arr[0];
		for (int j = 1; j < n; j++) {
			swap(arr[j], temp_1);
		}
		arr[0] = temp;
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i];
	
}*/