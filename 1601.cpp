/*#include <iostream>
#include <string>
using namespace std;


int main() {
    char cur; bool bSign = true;
    while ((cur = getchar()) != EOF) {
        if (!bSign) {
            cur = tolower(cur);
            cout << cur;
        }
        if (bSign) {
            cout << cur;
            if ('A' <= cur && cur <= 'Z' || 'a' <= cur && cur <= 'z')
                bSign = false;
        }
        if (cur == '.' || cur == '!' || cur == '?')
            bSign = true;
    }
	return 0;
}*/