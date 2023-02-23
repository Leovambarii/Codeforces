#include<iostream>
#include <map>

int main(){
    int t, n;
    std::cin >> t;
    while(t--){
        std::cin >> n;
        std::string line;
        std::cin >> line;
        std::map<char,int> m;
        for (int i=65; i<=97; ++i)
            m[i] = 0;
        bool found = false;
        for(int i=0; i<n; i++) {
            if(i!=0){
                if(line[i]!=line[i-1] && m[line[i]]>0){
                    found = true;
                    std::cout << "NO" << std::endl;
                    break;
                }
            }
            m[line[i]]++;
        }
        if(!found)
            std::cout << "YES" << std::endl;;
    }
}