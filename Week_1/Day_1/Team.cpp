#include <iostream>

int main() {
    int n;

    std::cin >> n;
    if(n<1 || n>100) {
        std::cout << "\nWrong input!\n";
        return 0;
    }
    int output = 0, Petya, Vasya, Tonya;
    for(int i=0; i<n; i++) {
        std::cin >> Petya >> Vasya >> Tonya;
        if(Petya+Vasya+Tonya > 1)
            output++;
    }
    std::cout << output << std::endl;

    return 0;
}