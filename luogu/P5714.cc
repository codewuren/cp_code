#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    double m, h;
    cin >> m >> h;

    double bmi = m / pow(h, 2);

    if (bmi < 24) {
        if (bmi < 18.5) {
            cout << "Underweight" << endl;
        }
        else {
            cout << "Normal" << endl;
        }
    }
    else {
        cout << bmi << endl << "Overweight" << endl;
    }

    return 0;
}
