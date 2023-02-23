#include <bits/stdc++.h>

int main() {
    int a, b, hours=0;
    std::cin >> a >> b;
    for(int i=a, k=0; i>0; --i) {
        hours++;
        k++;
        if(k == b) {
            i++;
            k = 0;
        }
    }
    std::cout << hours << std::endl;

    return 0;
}
