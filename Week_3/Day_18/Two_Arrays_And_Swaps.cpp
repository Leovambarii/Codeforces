#include <bits/stdc++.h>

int main() {
    int t, n, k, ans;
    std::cin >> t;
    for(int i=0; i<t; i++) {
        std::cin >> n >> k;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            std::cin >> a[i];
        for(int i=0; i<n; i++)
            std::cin >> b[i];
        std::sort(a, a+n);
        std::sort(b, b+n, std::greater<int>());
        for(int i=0; i<k; i++) {
            for(int j=0; j<n; j++) {
                if(b[j] > a[j]) {
                    std::swap(a[j], b[j]);
                    break;
                }
            }
        }
        int sum=0;
        for(int el : a)
            sum += el;
        std::cout << sum << std::endl;
    }

    return 0;
}