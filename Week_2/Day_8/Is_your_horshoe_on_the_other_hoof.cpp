#include <iostream>
#include <algorithm>

int main() {
    long int tab[5], x=3;
    for(int i=0; i<4; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+4);
    for(int i=0; i<3; i++) {
        if(tab[i] != tab[i+1])
            x--;
    }
    std::cout << x << std::endl;

    return 0;
}