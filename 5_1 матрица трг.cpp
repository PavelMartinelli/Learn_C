/*#include <iostream>
#include <fstream>
using namespace std;

bool Is_Tri(int**, int&);

int** Read_M(ifstream&, int&);

void Print_M(ofstream&, int**, int&);

int main() {
	int n;
	ifstream fin("in.txt");
	int** a = Read_M(fin, n);
	ofstream fout("out.txt");
	if (Is_Tri(a, n)) {
		Print_M(fout, a, n);
	}

	fout.close();
	return 0;
}

bool Is_Tri(int** a, int& n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 1; j < i; ++j) {
			if (a[i][j] != 0)
				return false;
		}
	}
	return true;
}

int** Read_M(ifstream& f, int& n) {
	f >> n;
	int** a = new int* [n];
	for (int j = 0; j < n; ++j) {
		a[j] = new int[n];
		for (int i = 0; i < n; ++i)
			f >> a[j][i];
	}
	return a;
}

void Print_M(ofstream&  f, int** a, int& n) {
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n; ++i)
			f << a[j][i] << " ";
		f << endl;
	}
}*/