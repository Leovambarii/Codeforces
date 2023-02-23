#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::string line;
        std::cin >> n;
        std::cin >> line;
        int count=0, left=0, right=0;
        for(int i=0; i<n; i++){
            if(line[i] == '(' && line[i+1] == ')') {
                i++;
                continue;
            }
            if(line[i] == '(')
                left++;
            if(line[i] == ')'){
                right++;
                if(left < right) {
                    count++;
                    right--;
                }
            }
        }
        std::cout << count << std::endl;
    }

    return 0;
}