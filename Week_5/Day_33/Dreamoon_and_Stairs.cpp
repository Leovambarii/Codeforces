#include <iostream>

int main()
{
    int n, m, sol;
    std::cin >> n >> m;
    if(m > n)
        sol = -1;
    else {
        if(n%2 == 0)
            sol = n/2;
        else
            sol = (n/2)+1;
        while (sol%m != 0)
            sol++;
    }
    std::cout << sol << std::endl;
    return 0;
}