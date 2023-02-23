#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        int tab[n];
        for(int i=0; i<n; i++)
            tab[i] = i+1;
        if(n%2==0) {
            for(int i=0; i<n; i+=2)
                std::swap(tab[i], tab[i+1]);
        } else {
            for(int i=0; i<n-2; i+=2)
                std::swap(tab[i], tab[i+1]);
            std::swap(tab[0], tab[n-1]);
        }
        for(int el : tab)
            std::cout << el << " ";
        std::cout << std::endl;
    }

    return 0;
}