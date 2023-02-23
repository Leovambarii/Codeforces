#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        std::string keybord, s;
        std::cin >> keybord;
        std::cin >> s;
        if(s.length() == 1) {
            std::cout << 0 << std::endl;
            continue;
        }
        int index_1, index_2, sum=0;
        for(int i=0; i<keybord.length(); i++)
            if(s[0] == keybord[i]) {
                index_1 = i;
                break;
            }
        for(int i=1; i<s.length(); i++) {
            for(int j=0; j<keybord.length(); j++) {
                if(s[i] == keybord[j]) {
                    index_2 = j;
                    break;
                }
            }
            sum += abs(index_1-index_2);
            index_1 = index_2;
        }
        std::cout << sum << std::endl;
    }

    return 0;
}