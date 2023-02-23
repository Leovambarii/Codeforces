#include <iostream>

int main() {
    int n, x, even=0, even_i, odd=0, odd_i;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(x%2 != 0) {
            odd++;
            odd_i = i;
        } else {
            even++;
            even_i = i;
        }
        if(odd == 1 && even > 1) {
            std::cout << odd_i+1 << std::endl;
            break;
        } else if(even == 1 && odd > 1) {
            std::cout << even_i+1 << std::endl;
            break;
        }
    }

    return 0;
}