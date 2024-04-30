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
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] -= 32;
    }
    cout << str;

    return 0;
}
