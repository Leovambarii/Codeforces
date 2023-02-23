#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int sum_1=0, sum_2=0;
        std::string number;
        std::cin >> number;
        for(int i=0; i<number.length(); i++) {
            if(i<3)
                sum_1 += number[i] - '0';
            else
                sum_2 += number[i] - '0';
        }
        if(sum_1 == sum_2)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}