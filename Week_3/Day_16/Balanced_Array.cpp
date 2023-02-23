#include <iostream>

int main() {
    int t, n;
    std::cin >> t;
    for(int i=0; i<t; i++) {
        std::cin >> n;
        int tab_even[n/2];
        int tab_odd[n/2];
        int sum_even=0, sum_odd=0;
        for(int i=0; i<n/2; i++) {
            tab_even[i] = 2+2*i;
            sum_even += 2+2*i;
        }
        for(int i=0; i<(n/2)-1; i++) {
            tab_odd[i] = 1+2*i;
            sum_odd += 1+2*i;
        }
        if((sum_even-sum_odd)%2 == 1) {
            std::cout << "YES" << std::endl;
            int x = n/2;
            tab_odd[(n/2)-1] = sum_even-sum_odd;
            for(int el : tab_even)
                std::cout << el << " ";
            for(int el : tab_odd)
                std::cout << el << " ";
            std::cout << std::endl;
        } else 
            std::cout << "NO" << std::endl;
    }

    return 0;
}