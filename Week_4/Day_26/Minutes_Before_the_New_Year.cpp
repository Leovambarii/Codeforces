#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int m, h, minutes;
        std::cin >> h >> m;
        minutes = (24-h-1)*60+(60-m);
        std::cout << minutes << std::endl;
    }
    return 0;
}