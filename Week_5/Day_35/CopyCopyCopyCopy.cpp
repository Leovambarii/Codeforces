#include <bits/stdc++.h>

int main() {
    long long t, n, a;
    std::cin >> t;
    while(t--) {
        std::set<long long> set;
        std::cin >> n;
        while(n--) {
            std::cin >> a;
            set.insert(a);
        }
        std::cout << set.size() << std::endl;
    }

    return 0;
}