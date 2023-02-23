#include <bits/stdc++.h>

int main() {
    long int t, n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        int rest = n%2020;
        int div = n/2020;
        if(rest <= div)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}