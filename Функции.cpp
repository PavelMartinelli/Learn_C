/*#include <iostream>
#include <cstdarg>
#include <string>
using namespace std;
int intNumbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int foundedNumber[10] = { 0 };

void SelectNumber(int indx, int n = 1) {
	int k = 0;
	for (int i = indx; i < indx + n; i++) {
		foundedNumber[k++] = intNumbers[i];
	}
	
}

int Average(int n, ...) {
	va_list list;
	va_start(list, n);
	double result = 0;
	for (int i = 0; i < n; ++i) {
		double temp = va_arg(list, double);
		result += temp;
	}
	va_end(list);
	return result / n;
}

void Swap_by_ref(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}



int square(int x) {
	return x * x;
}

bool Contains(int number) {
	for (auto temp : intNumbers)
		if (temp == number)
			return true;
	return false;
}

bool TryParsePositve(string s, int& outResult) {
	int result = stoi(s);
	if (result > 0) {
		outResult = result;
		return true;
	}
	return false;
}

int Test1() {
	int x = 100;
	return x;
}

int& Test2() { // Tак не писать
	int x = 100;
	return x;
}

void Print_with_count(const int& x) {
	static int count = 0;
	count++;
	cout << "Count is " << count << endl;
	cout << "Int is " << x << endl;
}
int main() {

	Print_with_count(1);
	Print_with_count(1);
	Print_with_count(1);

	cout << "-------------------------------\n" << endl;

	int x = 13;
	int& refX = x;

	refX++;

	int y = 23;
	refX = y;

	cout << x << endl;
	int result;


	if (TryParsePositve("-11111", result)) {
		cout << result << endl;
	}
	else
		cout << "AAAAAAAAAAAAAAAA" << endl;

	cout << Test2() << endl; // «ло (не добро)



	int n;
	cin >> n;
	cout << square(n) << endl;
	cout << Contains(n) << endl;
	cout << "__________________________________" << endl;

	SelectNumber(3);
	cout << foundedNumber[3] << endl;

	SelectNumber(1, 7);
	cout << foundedNumber[1] << endl;

	cout << "__________________________________" << endl;

	cout << Average(3, 1.0, 2.0, 3.0) << endl;


	cout << "__________________________________" << endl;

	int x = 1;
	int y = 2;
	Swap_by_ref(x, y);
	cout << x << " - " << y << endl;
	

	
	return 0;
}*/