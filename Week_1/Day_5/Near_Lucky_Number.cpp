#include <iostream>
#include <string>

int main() {
    long long int n, four_seven=0;
    std::cin >> n;
    for(int i=0; n>0; n/=10)
        if(n%10 == 4 || n%10==7)
            four_seven++;
    if(four_seven==4 || four_seven==7)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}