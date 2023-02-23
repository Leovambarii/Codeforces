#include <iostream>

int main() {
    long int a, b, t;
    std::cin >> t;
    int tab[t][2];
    for(int i=0; i<t; i++)
        std::cin >> tab[i][0] >> tab[i][1];
    for(int i=0; i<t; i++) {
        int steps=0, val=10;
        a = tab[i][0];
        b = tab[i][1];
        if(a==b) {
            std::cout << 0 << std::endl;
            continue;
        } else {
            if(abs(a-b)%10 == 0)
                std::cout << abs(a-b)/10 << std::endl;
            else
                std::cout << (abs(a-b)/10)+1 << std::endl;
        }
    }

    return 0;
}