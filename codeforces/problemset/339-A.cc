#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> summands;
    string str;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            summands.push_back(str[i] - '0');
        }
    }

    sort(ALL(summands));

    for (int i = 0; i < summands.size(); i++) {
        if (i != summands.size() - 1) {
            cout << summands[i] << "+";
        } else {
            cout << summands[i];
        }
    }

    return 0;
}
