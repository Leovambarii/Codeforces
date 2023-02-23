#include <iostream>

int main() {
    long int x, sum=0;
    std::cin >> x;
    while(x != 0) {
        x = x&(x-1);
        sum++;
    }
    std::cout << sum << std::endl;

    return 0;
}