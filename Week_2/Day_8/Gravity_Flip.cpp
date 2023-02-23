#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    int tab[n], result[n];
    for(int i=0; i<n; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+n);
    for(int i=0; i<n; i++)
        std::cout << tab[i] << " ";

    return 0;
}