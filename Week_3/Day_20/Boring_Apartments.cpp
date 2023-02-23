#include <iostream>

int main() {
    int t, x;
    std::cin >> t;
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    while(t--) {
        std::cin >> x;
        int count = 0;
        for(int el : tab) {
            int a = el;
            count++;
            if(a == x) {
                std::cout << count << std::endl;
                break;
            } else {
                for(int j=1; j<4; j++) {
                    a = a*10+el;
                    count += j+1;
                    if(a == x)
                        break;
                }
            }
            if(a == x) {
                std::cout << count << std::endl;
                break;
            }
        }
    }

    return 0;
}