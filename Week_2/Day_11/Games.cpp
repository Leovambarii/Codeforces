#include <iostream>

int main() {
    int n, sum=0;
    std::cin >> n;
    int tab[n][2];
    for(int i=0; i<n; i++)
        std::cin >> tab[i][0] >> tab[i][1];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j)
                continue;
            else if(tab[i][0] == tab[j][1])
                sum++;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}