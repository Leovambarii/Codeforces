#include <bits/stdc++.h>

int main() {
    long long n, a, b, inc_size=1, max_inc_size=1;
    std::cin >> n;
    std::cin >> a;
    for(int i=0; i<n-1; i++) {
        std::cin >> b;
        if(a<b) {
            inc_size++;
            a = b;
            if(inc_size > max_inc_size)
                max_inc_size = inc_size;
        } else {
            inc_size = 1;
            a = b;
        }
    }
    std::cout << max_inc_size << std::endl;

    return 0;
}