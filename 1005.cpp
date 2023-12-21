/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main() {
    int n, summ_w = 0, razn = 0, min_razn = 2000000;
    cin >> n;
    int* stoun = new int[20];
    for (int i = 0; i < n; ++i) {
        cin >> stoun[i];
        summ_w += stoun[i];
    }
    for (int i = 0; i < 1 << n - 1; ++i) {
        int ch = i, j = 0, w = 0;
        while (ch) {
            if (ch & 1)
                w += stoun[j];
            ch = ch >> 1;
            j++;
        }
        razn = abs((2 * w) - summ_w);
        if (razn < min_razn)
            min_razn = razn;
    }
    cout << min_razn;
    return 0;
}*/