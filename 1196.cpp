/*#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main() {
    int n, m;
    cin >> n;
    int* teacher = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> teacher[i];
    }
    cin >> m;
    int* student = new int[m];
    for (int i = 0; i < m; ++i) {
        cin >> student[i];
    }

    sort(student, student + m);
    int i = 0, j = 0, cnt = 0;
    while (i < n && i <= j) {
        if (teacher[i] < student[j]) 
            i++;
        else if (teacher[i] == student[j]) { 
            cnt++; 
            j++; 
        }
        else 
            j++;
    }
    cout << cnt;
    return 0;
}*/