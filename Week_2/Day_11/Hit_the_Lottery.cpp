#include <iostream>

int main() {
    int n, bills = 0;
    std::cin >> n;
    int tab[] = {100, 20, 10, 5, 1};
    for(int i=0; i<sizeof(tab)/sizeof(tab[0]); i++) {
        if(n>=tab[i]) {
            bills += n/tab[i];
            n = n-((n/tab[i])*tab[i]);
        } else
            continue;
    }
    std::cout << bills << std::endl;
    

    return 0;
}