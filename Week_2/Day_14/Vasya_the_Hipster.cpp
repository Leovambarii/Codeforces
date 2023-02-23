#include <iostream>

int main() {
    int a, b, count_1=0, count_2=0;
    std::cin >> a >> b;
    while(true) {
        if(a>=1 && b>=1) {
            count_1++;
            a--;
            b--;
        } else {
            if(a >=2) {
                count_2++;
                a -= 2;
            } else if(b >=2) {
                count_2++;
                b -= 2;
            }
        }
        if((a==0 && b==0) || (a==1 && b==0) || (a==0 && b==1))
            break;
    }
    std::cout << count_1 << " " << count_2 << std::endl;

    return 0;
}