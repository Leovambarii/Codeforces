#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    int n,p, level;
    std::cin >> n;
    int tab[n];
    std::cin >> p;
    for(int i=0; i<p; i++) {
        std::cin >> level;
        tab[level-1] = 1;
    }
    std::cin >> p;
    for(int i=0; i<p; i++) {
        std::cin >> level;
        tab[level-1] = 1;
    }
    for(int i=0; i<n; i++) {
        if(tab[i] != 1) {
            std::cout << "Oh, my keyboard!" << std::endl;
            return 0;
        }
    }
    std::cout << "I become the guy." << std::endl;



    return 0;
}