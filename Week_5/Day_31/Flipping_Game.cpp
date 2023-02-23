#include <bits/stdc++.h>

int main() {
    int n, a, ones=0, zeros=0, zeros_max=-1;
    std::cin >> n;
    while(n--) {
        std::cin >> a;
        if(a == 1) {
            ones++;
            if(zeros > 0)
                zeros--;
        } else {
            zeros++;
            if(zeros > zeros_max)
                zeros_max = zeros;
        }
    }
    std::cout << ones + zeros_max << std::endl;



    return 0;
}