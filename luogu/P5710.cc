#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int num;
    cin >> num;

    bool c1 = (num & 1) == 0;
    bool c2 = num > 4 && num <= 12;
    
    cout << (c1 && c2 ? 1 : 0) << " "
        << ((c1 || c2) || (c1 && c2) ? 1 : 0) << " "
        << ((c1 || c2) && !(c1 && c2) ? 1 : 0) << " "
        << (!(c1 || c2) ? 1 : 0) << endl;

    return 0;
}
