#include <bits/stdc++.h>

int main() {
    long long n, x, count=0;
    std::cin >> n >> x;
    for(int i=1; i<=n; i++) {
        if(x%i == 0 && x/i<=n)
            count++;
    }
    std::cout << count << std::endl;

    return 0;
}