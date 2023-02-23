#include <bits/stdc++.h>

int main() {
    long long int n, k, x, sol=0;
    std::cin >> n >> k;
    long long tab[n], sum[n];
    for(int i=0; i<n; i++) {
        std::cin >> tab[i];
        if(i==0)
            sum[0] = tab[i];
        else
            sum[i] = sum[i-1]+tab[i];
    }
    long long lowest = 1e16;
    for(int i=0; i<n-k+1; i++) {
        if(i==0)
            x = sum[i+k-1];
        else
            x = sum[i+k-1]-sum[i-1];
        if(x<0)
            x *= -1;
        if(x < lowest) {
            lowest = x;
            sol = i;
        }
    }
    std::cout << sol+1 << std::endl;
    return 0;
}