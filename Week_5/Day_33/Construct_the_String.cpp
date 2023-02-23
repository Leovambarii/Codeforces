#include<bits/stdc++.h>

int main() {
    int t, n, a, b, x;
    std::cin >> t;
    while(t--) {
        std::cin >> n >> a >> b;
        char alphabet[]="abcdefghijklmnopqrstuvwxyz";
        std::string s;
        for(int i=0; i<b; i++)
            s[i] = alphabet[i];
        x=0;
        while(n--) {
            std::cout << s[x];
            x++;
            if(x==b)
                x=0;
        }
        std::cout << std::endl;
    }
    return 0;
}