#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

char lower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch += 32;
    }
    return ch;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str1;
    string str2;
    cin >> str1;
    cin >> str2;

    for (int i = 0; i < str1.length(); i++) {
        if (lower(str1[i]) != lower(str2[i])) {
            if (lower(str1[i]) > lower(str2[i])) {
                cout << "1" << endl;
            }
            else {
                cout << "-1" << endl;
            }
            return 0;
        }
    }

    cout << "0" << endl;

    return 0;
}