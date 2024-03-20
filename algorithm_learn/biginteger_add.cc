#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string str1, str2;
    cin >> str1 >> str2;
    
    int len1 = str1.length(), len2 = str2.length();
    
    vector<int> vec1;
    vector<int> vec2;
    vector<int> sum;
    
    for (int i = 0; i < len1; i++) {
        vec1.push_back(str1[i] - '0');
    }
    
    for (int i = 0; i < len2; i++) {
        vec2.push_back(str2[i] - '0');
    }

    int i = len1 - 1;
    int j = len2 - 1;
    while (i >= 0 && j >= 0) {
        sum.push_back(vec1[i] + vec2[j]);
        i--;
        j--;
    }

    while (i >= 0) {
        sum.push_back(vec1[i]);
        i--;
    }

    while (j >= 0) {
        sum.push_back(vec2[j]);
        j--;
    }

    for (int k = 0; k < sum.size(); k++) {
        if (sum[k] >= 10) {
            if (k + 2 > sum.size()) {
                sum.push_back(sum[k] / 10);
            }
            else sum[k + 1] += sum[k] / 10;
            sum[k] = sum[k] % 10;
        }
    }

    reverse(sum.begin(), sum.end());

    for (auto v : sum) {
        cout << v;
    }
    cout << endl;
    
    return 0;
}