#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long int n, m;
        std::cin >> n >> m;
        int tab[n];
        if(n==1) {
            std::cout << 0 << std::endl;
            continue;
        }
        else if(n==2) {
            std::cout << m << std::endl;
            continue;
        } else {
            std::cout << 2*m << std::endl;
            continue;
        }
    }

    return 0;
}