#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long int n, count=0, k;
        std::cin >> n;
        for(int i=1; i<=9; i++) {
            k = i;
            while(k <= n) {
                count++;
                k = k*10+i;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}