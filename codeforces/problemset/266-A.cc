#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<char> str(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    for (int i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            cnt++;
        }
    }

    cout << cnt << endl; 

    return 0;
}
