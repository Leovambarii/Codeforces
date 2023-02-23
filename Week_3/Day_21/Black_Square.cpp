#include <bits/stdc++.h>

int main() {
    int a_1, a_2, a_3, a_4, sum=0;
    std::string line;
    std::cin >> a_1 >> a_2 >> a_3 >> a_4;
    std::cin >> line;
    for(int i=0; i<line.length(); i++) {
        int strip = line[i] - '0';
        if(strip == 1)
            sum += a_1;
        else if(strip == 2)
            sum += a_2;
        else if(strip == 3)
            sum += a_3;
        else 
            sum += a_4;
    }
    std::cout << sum << std::endl;

    return 0;
}