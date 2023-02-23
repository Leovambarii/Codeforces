#include <iostream>
#include <algorithm>

int main() {
    int t, n;
    std::cin >> t;
    for(int i=0; i<t; i++) {
        std::cin >> n;
        int tab[n];
        for(int i=0; i<n; i++)
            std::cin >> tab[i];
        std::sort(tab, tab+n);
        bool is_done = true;
        for(int j=n-1; j>0; j--) {
            if(tab[j]-tab[j-1] > 1) {
                is_done = false;
                break;
            }
        }
        if(is_done)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;

    }

    return 0;
}