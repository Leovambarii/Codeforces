#include <iostream>

int main() {
    int t, n, x;
    std::cin >> t;
    while(t--) {
        int wrong_zeros=0, wrong_ones=0;
        std::cin >> n;
        for(int i=0; i<n; i++) {
            std::cin >> x;
            if(i%2 != x%2) {
                if(x%2 == 0)
                    wrong_ones++;
                else
                    wrong_zeros++;
            }
        }
        if(wrong_ones == 0 && wrong_zeros == 0)
            std::cout << 0 << std::endl;
        else if(wrong_ones != wrong_zeros)
            std::cout << -1 << std::endl;
        else
            std::cout << wrong_ones << std::endl;
    }

    return 0;
}