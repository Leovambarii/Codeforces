#include <iostream>

int main() {
    int n, x, low, high, count=0;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        std::cin >> x;
        if(i == 0) {
            low = x;
            high = x;
        } else {
            if(x > high) {
                high = x;
                count++;
            } else if(x < low) {
                low = x;
                count++;
            }
        }
    }
    std::cout << count << std::endl;


    return 0;
}