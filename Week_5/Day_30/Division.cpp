#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int x;
        std::cin >> x;
        int arr[] = {1900, 1600, 1400};
        std::cout << "Division ";
        bool done = false;
        for(int i=0; i<3; i++) {
            if(x>=arr[i]) {
                std::cout << i+1 << std::endl;
                done = true;
                break;
            }
        }
        if(!done)
            std::cout << 4 << std::endl;
    }

    return 0;
}