#include <bits/stdc++.h>

int main() {
    int m, s, t;
    std::cin >> m >> s;
    if (s == 0) {
        std::cout << (m == 1 ? "0 0" : "-1 -1") << std::endl;
        return 0;
    }
    std::string a, b;
    for (int i=0; i<m; i++) {
        t = std::min(s, 9);
        b += t + '0';
        s -= t;
    }
    if (s>0) {
        std::cout << "-1 -1" << std::endl;
        return 0;
    }
    for (int i=m-1; i>=0; i--)
        a += b[i];
    int i;
    for (i=0; a[i]=='0'; i++);
    a[i]--;
    a[0]++;
    std::cout << a << " " << b << std::endl;
    return 0;
}