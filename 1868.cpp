/*#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;


int main() {
    int n, k;
    string** place_res = new string*[12];
    for (int i = 0; i < 12; ++i) {
        place_res[i] = new string[2];
        cin >> place_res[i][0];
        if (i < 4) place_res[i][1] = "gold";
        else if (i >= 4 && i < 8) place_res[i][1] = "silver";
        else place_res[i][1] = "bronze";

    }

    cin >> n;
    int* Right_guess = new int[n] { 0 };
    string*** Player_geuss = new string**[n];
    for (int i = 0; i < n; ++i) {
        cin >> k;
        Player_geuss[i] = new string * [k];
        for (int j = 0; j < k; ++j) {
            Player_geuss[i][j] = new string[2];
            char null;
            cin >> Player_geuss[i][j][0] >> null >> Player_geuss[i][j][1];

            for (int g = 0; g < 12; ++g) {
                if (place_res[g][0] == Player_geuss[i][j][0] && place_res[g][1] == Player_geuss[i][j][1])
                    Right_guess[i]++;
            }
        }
    }
    
    int ans = 0;
    int max = 0;
    for (int i = 0; i < n; ++i) {
        if (max < Right_guess[i]) {
            max = Right_guess[i];
            ans = 5;
        }
        else if (max == Right_guess[i])
            ans += 5;
    }

    cout << ans << endl;
    return 0;
}*/