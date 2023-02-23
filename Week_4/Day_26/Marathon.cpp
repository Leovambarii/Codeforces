#include <bits/stdc++.h>

int main() {
    int t, a, b, c, d;
    std::cin >> t;
    while(t--) {
        int count = 0;
        std::cin >> a >> b >> c >> d;
        if(a<b)
            count++;
        if(a<c)
            count++;
        if(a<d)
            count++;
        std::cout << count << std::endl;
    }

    return 0;
}