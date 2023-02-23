#include <iostream>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    int tab[m];
    for(int i=0; i<m; i++)
        std::cin >> tab[i];
    std::sort(tab, tab+m);
    int minimum = tab[n-1]-tab[0];
    for(int i=1; i<=m-n; ++i) {
        if(tab[i+n-1]-tab[i] < minimum)
            minimum = tab[i+n-1]-tab[i];
    }
    std::cout << minimum << std::endl;

    return 0;
}