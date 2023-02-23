#include <bits/stdc++.h>

int main() {
    int n, m;
    std::cin >> n >> m;
    if(n >= m) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    for(int i=n+1; i<=m; i++) {
        int x=2;
        bool is_prime = true;
        while(x<=m/2) {
            if(i%x == 0) {
                is_prime = false;
                break;
            }
            x++;
        }
        if(is_prime && i!=m || !is_prime && i==m) {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}