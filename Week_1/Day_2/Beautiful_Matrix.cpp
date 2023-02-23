#include <iostream>

int main() {
    int n = 5, row, col, one = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            std::cin >> one;
            if(one == 1) {
                row = i+1;
                col = j+1;
            }
        }
    }
    int mid = n/2+1;
    std::cout << abs(row - mid) + abs(col - mid) << std::endl;\

    return 0;
}