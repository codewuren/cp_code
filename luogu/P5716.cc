#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

bool check(int num) {
    return (num % 4 == 0 && num % 100 != 0) || num % 400 == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y, m;
    cin >> y >> m;

    vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (!check(y) || m != 2) {
        cout << months[m - 1] << endl;
    } else {
        cout << 29 << endl;
    }

    return 0;
}
