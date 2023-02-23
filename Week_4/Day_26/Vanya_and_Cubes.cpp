#include <bits/stdc++.h>

int main() {
    int n, i=1, count=0;
    std::cin >> n;
    while(n>=i) {
        n -= i;
        count++;
        i += count+1;
    }
    std::cout << count << std::endl;
    return 0;
}