#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int sticks=0;
        long int n;
        std::cin >> n;
        sticks = n/2;
        if(n%2==1)
            sticks++;
        std::cout << sticks << std::endl;
    }

    return 0;
}