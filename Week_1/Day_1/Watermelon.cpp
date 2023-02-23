#include <iostream>

int main() {
    int w;
    std::cin >> w;
    if(w<1 && w>100) {
        std::cout << "\nWrong input!\n";
        return 0;
    }

    else if(w%2==0 && w!=2)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}