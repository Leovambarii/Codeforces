#include <bits/stdc++.h>

int main() {
    int n, m, days=0;
    std::cin >> n >> m;
    for(int i=n, k=0; i>0; --i) {
        k++;
        if(k == m) {
            i++;
            k = 0;
        }
        days++;
    }
    std::cout << days << std::endl;

    return 0;
}