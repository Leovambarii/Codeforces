#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, m;
        std::cin >> n >> m;
        std::cout << (n*m)/2+(n*m)%2 << std::endl;
    }

    return 0;
}