#include <iostream>
#include <vector>

int main () {
    int h, n;
    std::vector<int> q, p;
    std::cin >> h >> n;
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        q.push_back(in);
    }
    for (int i = 0; i < n; i++) {
        int in;
        std::cin >> in;
        p.push_back(in);
    }
    int sum;
    for (int i = 0; i < n; i++) {
        sum += q[i] - p[i];
        if (sum >= h || sum + p[i] >= h) {
            std::cout << "yes " << i + 1;
            return 0;
        }
    }
    if (sum < h) std::cout << "no";
    return 0;
}
