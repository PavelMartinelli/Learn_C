/*#include <iostream>
#include <fstream>
using namespace std;

int Factorial(int n) {
	if (n == 1)
		return 1;
	else
		return n * Factorial(n - 1);
}

int Pow_fast(int n, int s) {
	if (s == 0)
		return 1;
	if (s == 1)
		return n;
	else {
		int b = n * n;
		return Pow_fast(n, s - 2) * b * pow(n, s % 2);
	}
}

int** Pow_fast_matrix(int** a, int s) {
	if (s == 1)
		return a;
}

int determinant(int** a, int n) {
	int suum = 0;
	int ind = 1;
	if (n == 2)
		return a[0][0] * a[1][1] - a[0][1] * a[1][0];
	else {
		int** b = new int* [n - 1];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n - 1; ++j) {
				b[i] = new int[n - 1];
			}
			for (int j = 0; j < n; ++j) {
				for (int k = 0; k < i; ++k)
					b[j][k] = a[j + 1][k];
				for (int k = i + 1; k < n; ++k)
					b[j][k] = a[j + 1][k];
			}
			suum += ind * a[0][i] * determinant(b, n - 1);
			ind *= -1;
		}
	}
}

int Nod(int n, int m) {
	if (n == m)
		return n;
	else if (n > m)
		return Nod(n - m, m);
	else
		return Nod(m - n, m);
}

int Fib(int n) {

}



int main() {
	int n, m;
	cin >> n;
	cin >> m;
	cout << Factorial(n) << endl;
	cout << Pow_fast(n, 4) << endl;
	cout << Nod(n, m) << endl;
	return 0;
}*/
//рекурси фактариал
//нод
//массив да надо посчитать сумму эл массива
//есть массив кол-во чисел равных заданому
//быстрое возведение числа в натуральную степень
//быстрое вычисление н-ого числа фибаначи
//вычисление определителя разложением по строке
// эрудит 1603
//конь 1298