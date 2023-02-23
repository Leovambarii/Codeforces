#include <bits/stdc++.h>

int main() {
    int t, n;
    std::cin >> t;
    while(t--) {
        std::cin >> n;
        int high, low, s;
        int tab[n];
        for(int i=0; i<n; i++)
            std::cin >> tab[i];
        std::sort(tab, tab+n);
        int diff = tab[n-1];
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(j==i)
                    continue;
                if(diff > abs(tab[i]-tab[j]))
                    diff = abs(tab[i]-tab[j]);
            }
        }
        std::cout << diff << std::endl;
    }


    return 0;
}