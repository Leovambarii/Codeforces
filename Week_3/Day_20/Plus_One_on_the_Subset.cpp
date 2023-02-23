#include <bits/stdc++.h>

int main() {
    int t, n;
    long long int a;
    std::cin >> t;
    while(t--) {
        long long int low, high;
        std::cin >> n;
        for(int i=0; i<n; i++) {
            std::cin >> a;
            if(i==0) {
                low = a;
                high = a;
                continue;
            }
            if(a > high)
                high = a;
            else if(a < low)
                low = a;

        }
        std::cout << high-low << std::endl;
    }

    return 0;
}