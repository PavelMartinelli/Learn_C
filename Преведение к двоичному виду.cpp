/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

string bit_number(int n) {
    string s = "";
    while (n) {
        if (n & 1)
            s = "1" + s;
        else
            s = "0" + s;
        n = n >> 1;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << bit_number(n) << endl;
    return 0;
}*/