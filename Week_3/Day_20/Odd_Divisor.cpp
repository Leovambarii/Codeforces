#include <bits/stdc++.h>

int main() {
    long long int t, n, x;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        if(n&(n-1))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}