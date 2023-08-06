#include <iostream>
#include <algorithm>
using namespace std;

int al[26];
int main() {
    
    string name;
    cin >> name;

    for (int i = 0; i < name.size(); i++)
        al[name[i] - 'A']++;

    int err = 0;
    int mid_index = -1;

    for (int i = 0; i < 26; i++) {
        if (al[i] > 0) {
            if (al[i] % 2 == 1) {
                mid_index = i;
                al[i]--;
                err++;
            }
        }
    }

    if (err > 1)
        printf("I'm Sorry Hansoo\n");
    else {
        string ans = "";
        string temp = "";
        for (int i = 0; i < 26; i++) {
            if (al[i] > 0) {
                for (int j = 0; j < al[i] / 2; j++) {
                    ans += i + 'A';
                }
            }
        }
        temp = ans;
        reverse(temp.begin(), temp.end());
        if (mid_index != -1) {
            ans += mid_index + 'A';
        }
        ans += temp;
        cout << ans << '\n';
    }
}
