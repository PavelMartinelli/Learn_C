/*#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;
void Print_Arr(int* pAray, const int& n) {
    for (int i = 0; i < n; ++i) {
        cout << pAray[i] << " ";
    }
    cout << endl;
}
//O(sqrt(n))
bool isPrime(int x) {
    for (int i = 2; i < sqrt(x) + 1; ++i)
        if (x % i == 0)
            return false;
    return true;
}
//O(sqrt(n)))
int* Factorize(int x, int& outCount) {
    int* result = new int[x] {0};
    int k = 0;
    for (int i = 2; i < sqrt(x)+ 1; ++i) {
        while (x % i == 0) {
            result[k++] = i;
            x = x / i;
        }
    }
    if (x != 1)
        result[k++] = x;
    outCount = k;
    return result;
}
//O(sqrt(n))
int* Diveders(int x, int& outCount) {
    int* dividers = new int[x] {0};
    int k = 0;
    for (int i = 2; i < sqrt(x) + 1; ++i) {
        if (x % i == 0) {
            dividers[k++] = i;
            if (x / i != i)
                dividers[k++] = x / i;
        }
    }

    outCount = k;
    return dividers;
}
int main() {
    int x = 19385848;
    int count = 0;
    int* result = Factorize(x, count);
    Print_Arr(result, count);

    int* div = Diveders(x, count);
    Print_Arr(result, count);
    return 0;
}*/