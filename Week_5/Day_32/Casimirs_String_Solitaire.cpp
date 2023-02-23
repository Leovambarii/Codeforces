#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int count_a=0, count_b=0, count_c=0;
        std::string line;
        std::cin >> line;
        for(int i=0; i<line.length(); i++) {
            char letter = line[i];
            if(letter == 'A')
                count_a++;
            else if(letter == 'B')
                count_b++;
            else
                count_c++;
        }
        if(count_b == count_a+count_c)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}