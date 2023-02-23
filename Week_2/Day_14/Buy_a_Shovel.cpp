#include <iostream>

int main() {
    int k, r, shovels=0, sum=0;
    std::cin >> k >> r;
    while(sum%10 != r) {
        sum += k;
        shovels++;
        if(sum%10 == 0)
            break;
    }
    std::cout << shovels << std::endl;

    return 0;
}