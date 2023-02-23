#include <bits/stdc++.h>

int main() {
    int n, count=0;
    std::cin >> n;
    for(int i=1; i<=n/2; i++) {
        if((n-i)%i == 0)
            count++;
    }
    std::cout << count << std::endl;

    return 0;
}