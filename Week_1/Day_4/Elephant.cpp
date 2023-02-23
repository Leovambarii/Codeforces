#include <iostream>

int main() {    
    int x, moves=0;
    std::cin >> x;
    int tab[] = {5, 4, 3, 2, 1};
    while(x>0) {
        for(int i=0; i<sizeof(tab)/sizeof(tab[0]); i++) {
            if(x>=tab[i]) {
                x -= tab[i];
                moves++;
                break;
            }
        }
    }
    std::cout << moves << std::endl;

    return 0;
}