/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

void hoarasort(int** a, int first, int last, int ind) {
    int i = first, j = last;
    int* tmp; 
    int x = a[(first + last) / 2][ind];
    do {
        while (a[i][1] < x)
            i++;
        while (a[j][1] > x)
            j--;

        if (i <= j)
        {
            if (i < j)
            {
                if (a[i][ind] == a[j][ind]) {
                    if (a[i][ind - 1] > a[j][ind - 1]) {
                        tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
                else {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
        hoarasort(a, i, last, 1);
    if (first < j)
        hoarasort(a, first, j, 1);
}

int main() {
    int n;
    cin >> n;
    int** doc = new int* [n];
    for (int i = 0; i < n; ++i) {
        doc[i] = new int[2];
        cin >> doc[i][0] >> doc[i][1];
    }

    hoarasort(doc, 0, n - 1, 1);

    int cur = doc[0][1];
    int cnt = 1;

    for (int i = 0; i < n; ++i) {
        if (doc[i][0] > cur) {
            cur = doc[i][1];
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}*/