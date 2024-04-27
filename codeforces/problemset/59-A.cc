#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    int cnt_upp = 0;
    for (auto ch : str) {
        if (isupper(ch)) {
            cnt_upp++;
        }
    }
    if ((double)cnt_upp == str.length() / 2.0) {
        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) {
                str[i] += 32;
            }
        }
    } else if (2 * cnt_upp > str.length()) {
        for (int i = 0; i < str.length(); i++) {
            if (islower(str[i])) {
                str[i] -= 32;
            }
        }
    } else {
        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) {
                str[i] += 32;
            }
        }
    }

    cout << str << endl;

    return 0;
}
