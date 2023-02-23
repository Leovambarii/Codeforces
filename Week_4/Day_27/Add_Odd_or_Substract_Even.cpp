#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        long int a, b, count=0, rest=0;
        std::cin >> a >> b;
        if(a==b) {
            std::cout << 0 << std::endl;
            continue;;
        }
        if(a>b) {
            rest = a-b;
            count++;
            if(rest%2 != 0)
                count++;
        } else if(a<b) {
            rest = b-a;
            count++;
            if(rest%2 != 1)
                count++;
        }
        std::cout << count << std::endl;
    }

    return 0;
}