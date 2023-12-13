/*#include <iostream>
using namespace std;

int main() { 
	int n; 
	cin >> n; 
	int* place = new int[2001];
	int* first_place = new int[2001];;
	int* last_place = new int[2001];;


	int place_cur;
	for (int i = 0; i < n; i++) { 
		cin >> place_cur;   
		place[i] = place_cur;   
		last_place[i] = n;
		first_place[i] = 1;
	}


	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < n; j++) { 
			if (j == i) continue;

			else if (j > i && place[j] < place[i]) 
				last_place[i] = last_place[i] - 1;

			else if (j < i && place[j] > place[i]) 
				first_place[i] = first_place[i] + 1;
		} 
	}


	int ind = 0;
	for (int i = 1; i <= n; i++) { 
		for (int j = 0; j < n; j++) { 
			if (place[j] == i) { 
				ind = j;     
				break; 
			} 
		}   
		cout << first_place[ind] << ' ' << last_place[ind] << endl; 
	} 
}*/