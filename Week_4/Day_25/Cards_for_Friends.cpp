#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long int w, h, n, sol=1;
        std::cin >> w >> h >> n;
        if(n==1) {
            std::cout << "YES" << std::endl;
            continue;
        }
        while(w%2==0) {
            sol *= 2;
            w = w/2;
        }
        while(h%2==0) {
            sol *= 2;
            h = h/2;
        }
        if(sol >= n)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }    

    return 0;
}