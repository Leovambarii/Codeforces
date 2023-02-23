#include<bits/stdc++.h>

int main() {
    int m, l, r, count=0;
    int arr[100001];
    std::string s;
    std::cin >> s >> m;
    for(int i=1; i<s.size(); i++){
        if(s[i] == s[i-1])
            count++;
        arr[i] = count;
    }
    while(m--){
        std::cin >> l >> r;
        std::cout << arr[r-1]-arr[l-1] << std::endl;
    }

}