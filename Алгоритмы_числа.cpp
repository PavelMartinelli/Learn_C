/*#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;
void Print_Arr(int* pAray, const int& n) { // печать масссива
    for (int i = 0; i < n; ++i) {
        cout << pAray[i] << " ";
    }
    cout << endl;
}
//O(sqrt(n))
bool isPrime(int x) { // простое ли число
    for (int i = 2; i < sqrt(x) + 1; ++i)
        if (x % i == 0)
            return false;
    return true;
}
//O(sqrt(n)))
int* Factorize(int x, int& outCount) { //–азложение на простые множители
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
int* Dividers(int x, int& outCount){ //–азложение на множители
    int n = sqrt(x);
    int* dividers = new int[n] { 0 };
    int k = 0;

    for (int i = 2; i <= n; i++){
        if (x % i == 0){
            dividers[k++] = i;
            if (i * i != x)
                dividers[k++] = x / i;
        }
    }

    outCount = k;
    return dividers;
}

int* Sieve_Eratosthenes(int n, int& outCount) { //O(N*ln(ln(N)))
    int count = n;
    int* number = new int[count];

    int* result = new int[count];
    int k = 0;

    for (int i = 0; i < count; ++i)
        number[i] = i;

    for (int p = 2; p < count; ++p) {
        if (number[p] == 0)
            continue;
        result[k++] = number[p];
        for (int j = p*p; j < count; j+= p) {
            number[j] = 0;
        }
    }
    
    outCount = k;
    return result;
}

int main() {
    int x = 12345;
    int count = 0;
    int* result = Factorize(x, count);
    Print_Arr(result, count);

    int* div = Dividers(x, count);
    Print_Arr(div, count);

    int n = 200;
    int* primse = Sieve_Eratosthenes(n, count);
    Print_Arr(primse, count);
    return 0;
}*/