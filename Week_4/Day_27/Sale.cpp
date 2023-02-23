#include <bits/stdc++.h>

int main() {
    int m, n, sum=0;
    std::cin >> n >> m;
    int tab[n];
    for(int i=0; i<n; i++) 
        std::cin >> tab[i];
    std::sort(tab, tab+n);
    for(int i=0; i<m; i++) {
        if(tab[i] <= 0)
            sum += abs(tab[i]);
        else if(tab[i] > 0)
            break;
    }
    std::cout << sum << std::endl;

    return 0;
}