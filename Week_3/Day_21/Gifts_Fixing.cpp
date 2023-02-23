#include <bits/stdc++.h>

int main() {
    int t, n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        long long int steps=0;
        long long int a[n], b[n];
        long long int a_smallest=1e18, b_smallest=1e18;
        for(int i=0; i<n; i++) {
            std::cin >> a[i];
            a_smallest = std::min(a_smallest, a[i]);
        }
        for(int i=0; i<n; i++) {
            std::cin >> b[i];
            b_smallest = std::min(b_smallest, b[i]);
        }
        for(int i=0; i<n; i++) {
            long long a_diff = a[i] - a_smallest;
            long long b_diff = b[i] - b_smallest;
            steps += std::max(a_diff, b_diff);
        }
        std::cout << steps << std::endl;
    }

    return 0;
}