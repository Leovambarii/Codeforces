#include<iostream>

int main(){
    int t, n;
    std::cin>>t;
    for(int i=0; i<t; i++){
        std::cin>>n;
        int tab[n];
        for (int i=0; i<n; ++i)
            std::cin >> tab[i];
        bool found = false;
        for(int i = 1; i <n-1 ; ++i) {
            if((tab[i] != tab[i-1]) && (tab[i] != tab[i+1])){
                std::cout << i+1 << std::endl;
                found = true;
            }
        }
        if(!found){
            if (tab[0]!=tab[1])
                std::cout<< 1 << std::endl;
            else
                std::cout<< n << std::endl;
        }
    }
}