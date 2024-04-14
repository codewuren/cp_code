#include <bits/stdc++.h>

#define fi first
#define se second

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    reverse(str.begin(), str.end());
    
    cout << str << endl;

    return 0;
}
