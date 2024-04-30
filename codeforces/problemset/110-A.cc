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

  int cnt = 0;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '4' || str[i] == '7') {
      cnt++;
    }
  }

  cout << (cnt == 4 || cnt == 7 ? "YES" : "NO") << endl;

  return 0;
}

