#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    vector<vector<int>> matrix(5, vector<int>(5));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }

    // cout << "x = " << x << " y = " << y << endl;
    cout << abs(y - 2) + abs(x - 2) << endl;

    return 0;
}
