#include <iostream>
#include <algorithm>

int main() {
    int m, n, i, j, k, p, count=0;
    std::cin >> n;
    int tab[n];
    for(i=0; i<n; i++)
        std::cin >> tab[i];
    std::cin >> m;
    std::sort(tab, tab+n);
    for(int i=0; i<m; i++) {
        std::cin >> k;
        std::cout << std::upper_bound(tab, tab+n, k)-tab << std::endl;
    }
    return 0;
}