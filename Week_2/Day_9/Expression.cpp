#include <iostream>

int main() {
    int a, b, c, ans;
    std::cin >> a >> b >> c;
    ans=a+b+c;
    ans=std::max(ans,(a*b*c));
    ans=std::max(ans,(a+b)*c);
    ans=std::max(ans,a*(b+c));
    ans=std::max(ans,a+(b*c));
    ans=std::max(ans,(a*b)+c);
    std::cout << ans << std::endl;

    return 0;
}