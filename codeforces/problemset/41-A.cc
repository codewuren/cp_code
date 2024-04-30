#include <bits/stdc++.h>

#define FI first
#define SE second
#define ALL(x) x.begin(), x.end()

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string str1;
  string str2;
  cin >> str1 >> str2;
  
  reverse(ALL(str1));
  bool flag = true;
  
  if (str1.length() != str2.length()) {
    flag = false;
  } else {
    for (int i = 0; i < str1.length(); i++) {
      if (str1[i] != str2[i]) {
        flag = false;
      }
    }
  }

  cout << (flag ? "YES" : "NO") << endl;

  return 0;
}
