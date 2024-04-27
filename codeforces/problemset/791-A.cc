#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int y = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        y++;
    }

    cout << y << endl;

    return 0;
}
