#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long int n, k;
        std::cin >> n >> k;
        std::cout << k+((k-1)/(n-1)) << std::endl;
    }
    return 0;
}