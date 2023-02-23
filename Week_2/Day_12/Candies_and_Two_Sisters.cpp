#include <iostream>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;
    long long int tab[t];
    for(int i=0; i<t; i++) 
        std::cin >> tab[i];
    for(int i=0; i<t; i++) {
        if(tab[i]%2==1)
            std::cout << tab[i]/2 << std::endl;
        else {
            std::cout << (tab[i]-1)/2 << std::endl;
        }
    }

    return 0;
}