#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long int n, x;
        std::cin >> n;
        for(int k=2; k<=35; k++) {
            x = std::pow(2, k)-1;
            if(n%x != 0)
                continue;
            x = n/x;
            break;
        }
        std::cout << x << std::endl;
    }

    return 0;
}