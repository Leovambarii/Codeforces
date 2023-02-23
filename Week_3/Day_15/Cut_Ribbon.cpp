#include <iostream>
#include <algorithm>

int main()
{
    int n, a, b, c, k, pieces=0, rest;
    while(std::cin>>n>>a>>b>>c) {
        for(int i=0; i*a<=n; ++i) {
            for(int j=0; i*a+j*b<=n; ++j) {
                rest = n-i*a-j*b;
                if(rest%c == 0){
                    k = rest/c;
                    pieces = std::max(pieces, i+j+k);
                }
           }
       }
       std::cout << pieces << std::endl;
    }

    return 0;
}