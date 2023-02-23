#include <iostream>

int main() {
    int t, k, x=0;
    std::cin >> t;
    int tab[1001];
    for(int i=0; i<sizeof(tab)/sizeof(tab[0]); i++) {
        x++;
        while((x%3 == 0) || (x%10 == 3))
            x++;
        tab[i] = x;
    }
    while(t--) {
        std::cin >> k;
        std::cout << tab[k-1] << std::endl;
    }

    return 0;
}