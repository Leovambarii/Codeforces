#include <iostream>

int main() {
    std::string line;
    int n;
    std::cin >> n;
    if(n%2==1)
        line = "I hate it";
    else if(n%2==0)
        line = "I love it";
    for(int i=n-1; i>=1; i--) {
        if(i%2==1)
            line = "I hate that " + line;
        else
            line = "I love that " + line;
    }
    std::cout << line <<std::endl;

    return 0;
}