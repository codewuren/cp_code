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
  string str;
  cin >> str;

  int cnt_a = 0; 
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'A') cnt_a++;
  }

  if (cnt_a * 2 > n) {
    cout << "Anton" << endl;
  } else if (cnt_a * 2 == n) {
    cout << "Friendship" << endl;
  } else {
    cout << "Danik" << endl;
  }

  return 0;
}
