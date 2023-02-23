#include <iostream>

int main() {
    int n, max=1, subsegment=1;
    std::cin >> n;
    int tab[n];
    for(int i=0; i<n; i++)
        std::cin >> tab[i];

    for(int i=1; i<n; i++) {
        if(tab[i]<tab[i-1])
            subsegment = 1;
        else {
            subsegment++;
            if(max < subsegment)
                max = subsegment;
        }
    }

    std::cout << max << std::endl;

    return 0;
}