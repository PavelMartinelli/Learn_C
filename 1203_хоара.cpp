/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;

void hoarasort(int** a, int first, int last, int ind = 1) {
    int i = first, j = last;
    int* tmp; int x = a[(first + last) / 2][ind];
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
        hoarasort(a, i, last);
    if (first < j)
        hoarasort(a, first, j);
}

int main() {
    
    return 0;
}*/