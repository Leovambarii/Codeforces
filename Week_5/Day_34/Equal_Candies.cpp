#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long long n, a, count=0;
        std::cin >> n;
        long long lowest = 10e7;
        int tab[n];
        for(int i=0; i<n; i++) {
            std::cin >> a;
            tab[i] = a;
            lowest = std::min(a, lowest);
        }
        for(int i=0; i<n; i++) {
            if(tab[i] != lowest) {
                count += tab[i]-lowest;
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}