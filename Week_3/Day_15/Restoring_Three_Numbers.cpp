#include <iostream>
#include <algorithm>

int main() {
    int n = 4;
    long int tab[n];
    for(int i=0; i<n; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+n);
    for(int i=0; i<n-1; i++)
        std::cout << tab[n-1] - tab[i] << " ";

    return 0;
}