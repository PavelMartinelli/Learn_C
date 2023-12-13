/*#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main() {
    int h, w, n;
    string s;
    cin >> h >> w >> n;
    int ost_symbol = w, str_count = 1, page_count = 1;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        int len = s.length();

        if (len < ost_symbol) {
            ost_symbol -= len;
            cout << ost_symbol << "  " << len << "  " << str_count << endl;
        }
        else {
            str_count++;
            ost_symbol = w - (len - ost_symbol);
            cout << ost_symbol << "  " << len << "  " << str_count << endl;
        }


        if (str_count == h && len >= ost_symbol) {
            page_count++;
            str_count = 0;
        }
    }

    cout << page_count << endl;
    return 0;
}*/