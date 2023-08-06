#include <iostream>
#define ll long long
#define ld long double
using namespace std;

ld W, L, D;
ld dp[41][21];
ld ans[5];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> W >> L >> D;

    dp[20][0] = 1;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 41; j++) {
            if (dp[j][i] != 0) { 
                cout << fixed; cout.precision(15);
                dp[j - 1][i + 1] += dp[j][i] * L;
                dp[j + 1][i + 1] += dp[j][i] * W;
                dp[j][i + 1] += dp[j][i] * D;
            }
        }

    }

    ld bronze, silver, gold, platinum, dia;
    for (int i = 0; i < 41; i++) {
        if (i < 10) ans[0] += dp[i][20];
        else if (i < 20) ans[1] += dp[i][20];
        else if (i < 30) ans[2] += dp[i][20];
        else if (i < 40) ans[3] += dp[i][20];
        else ans[4] += dp[i][20];
    }
    cout << fixed; cout.precision(8);
    for (int i = 0; i < 5; i++) cout << ans[i] << "\\n";
    return 0;
}