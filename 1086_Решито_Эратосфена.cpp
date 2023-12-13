/*#include <iostream>
using namespace std;

int top = 165000;
int* a = new int[top];

int get_prime(int n) {
	int cnt = 0;
	for (int i = 2; i <= top; ++i) {
		if (a[i]) {
			cnt++;
			if (cnt == n) 
				return a[i];

		}
	}

}

int main() {
	int k, n;
	cin >> k;
	for (int i = 0; i <= top; ++i)
		a[i] = i;
	for (int i = 2; i <= top; ++i) {
		if (a[i]) {
			for (int j = i + i; j <= top; j += i)
				a[j] = 0;
		}
	}
	for (int i = 0; i <= k; ++i) {
		cin >> n;
		cout << get_prime(n) << endl;
	}
		
	return 0;
}*/
