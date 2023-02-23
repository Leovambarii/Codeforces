#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, x, even=0, odd=0;
        std::cin >> n;
        for(int i=0; i<2*n; i++) {
            std::cin >> x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
        if(even==odd)
            std::cout << "Yes" << std::endl;
        else
            std::cout << "No" << std::endl;
    }
    return 0;
}