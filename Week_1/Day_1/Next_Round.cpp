#include <iostream>

int main() {
    int n,k;
    std::cin >> n >> k;
    if(n < 1 || n > 50 || k < 1 || k > 50 || n < k) {
        std::cout << "\nWrong input!\n";
        return 0;
    }

    int tab[n];
    for(int i=0; i<n; i++) {
        std::cin >> tab[i];
        if(tab[i] < 0 || tab[i] > 100) {
            std::cout << "\nWrong input!\n";
            return 0;
        }
    }
    int output = 0;
    for(int i=0; i<n; i++) {
        if(tab[i] >= tab[k-1] && tab[i] > 0)
            output++;
        else
            break;
    }
    std::cout << output << std::endl;

}