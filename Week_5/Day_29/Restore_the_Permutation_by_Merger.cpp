#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, x;
        std::cin >> n;
        std::vector<int> vect;
        int arr_2[n] = {};
        for(int i=0; i<2*n; i++) {
            std::cin >> x;
            if(arr_2[x-1] == 0) {
                arr_2[x-1]++;
                vect.push_back(x);
            }
        }
        for(int el: vect)
            std::cout << el << " ";
        std::cout << "\n";
    }

    return 0;
}