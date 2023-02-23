#include <iostream>

int main() {
    int n, wealthest, sum=0;
    std::cin >> n;
    int tab[n];
    for(int i=0; i<n; i++) {
        std::cin >> tab[i];
        if(i==0)
            wealthest = tab[i];
        else if(tab[i] > wealthest)
            wealthest = tab[i]; 
    }
    for(int i=0; i<n; i++) {
        if(tab[i] < wealthest)
            sum += wealthest-tab[i];
    }
    std::cout << sum << std::endl;

    return 0;
}