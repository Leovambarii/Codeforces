#include<bits/stdc++.h>

int main()
{
    long int n,t;
    while(std::cin >>n >> t) {
        if(n==1 && t==10)
            std::cout << "-1\n";
        else if(n>=2 && t==10) {
            for(int i=1; i<n; i++)
                std::cout<<"1";
            std::cout<<"0\n";
        } else {
            for(int i=1; i<=n; i++)
                std::cout << t;
            std::cout << std::endl;
        }
    }
    return 0;
}