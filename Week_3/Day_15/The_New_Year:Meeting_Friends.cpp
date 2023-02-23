#include <iostream>
#include <algorithm>

int main() {
    int n=3;
    int tab[n];
    for(int i=0; i<n; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+n);
    std::cout << abs(tab[0]-tab[1]) + abs(tab[2]-tab[1]) << std::endl;


    return 0;
}