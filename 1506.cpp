/*#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int N, K, count = 0;
	cin >> N >> K;
	int  Shift = ceil((double)N / K);

	int arr[100] = { 0 };

	for (int i = 0; i < N; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < Shift; i++){
		string res = "";
		for (int j = 0; j < K; j++){
			if (i + j * Shift < N){
				int temp = arr[i + j * Shift] / 10;
				int count = 1;

				while (temp){
					temp /= 10;
					count++;
				}
				res += string(4 - count, ' ') + to_string(arr[i + j * Shift]);
			}
			else 
				break;
		}
		cout << res << endl;
	}

	return 0;
}*/