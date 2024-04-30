#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;

vector<int> vec(N, 0);
vector<int> ne(N, 0);
int cnt = 0;
int head = -1;

void add(int idx, int num) {
    // 在第 idx 个插入的数后面插入一个数 num（此操作中 idx 均大于 0）
    vec[cnt] = num;
    ne[cnt] = ne[idx];
    ne[idx] = cnt;
    cnt++;
}

void del(int idx) {
    // 删除第 idx 个插入的数后面的数（当 idx 为 0 时，表示删除头结点）
    ne[idx] = ne[ne[idx]];
}

void add_to_head(int num) {
    // 向链表头插入一个数 num
    vec[cnt] = num;
    ne[cnt] = head;
    head = cnt++;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // 使用数组模拟单链表

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        char ope;
        cin >> ope;

        if (ope == 'H') {
            int num;
            cin >> num;
            add_to_head(num);
        }
        else if (ope == 'D') {
            int idx;
            cin >> idx;
            if (!idx) {
                head = ne[head];
            }
            else del(idx - 1); // 删除第 idx 个添加的数，即删除第 idx - 1 个添加的数后面的数。
        }
        else if (ope == 'I') {
            int idx, num;
            cin >> idx >> num;
            add(idx - 1, num); // 在 idx 处添加一个数 num ， 即在第 idx - 1 个添加的数后面添加。
        }
    }

    // 输出
    for (int i = head; i != -1; i = ne[i]) {
        cout << vec[i] << " ";
    }

    return 0;
}
