#include <iostream>

int main() {
    long int n, groups=0;
    std::string magnet_1, magnet_2;
    std::cin >> n;
    for(int i=0; i<n; i++) {
        if(i==0)
            std::cin >> magnet_2;
        else {
            std::cin >> magnet_1;
            if(magnet_1 != magnet_2) {
                groups++;
                magnet_2 = magnet_1;
            }
            else
                continue;
        }
    }
    groups++;
    std::cout << groups << std::endl;

    return 0;
}