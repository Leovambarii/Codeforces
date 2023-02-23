#include <iostream>

int main() {
    int n,i,k;
    std::cin>>n;
    int groups[5] = {0};
    for(i=0;i<n;i++) {
        std::cin>>k;
        groups[k]++;
    }
    int taxis = groups[4];
    taxis += groups[3];
    groups[1] -= groups[3];
    if(groups[1]<0)
        groups[1] = 0;
    taxis += groups[2]/2 + groups[2]%2;
    groups[2] = groups[2]%2;
    groups[1] = groups[1]-2*(groups[2]);
    if(groups[1]>0)
        taxis+=(groups[1])/4;
    if(groups[1]%4>0)
        taxis++;
    std::cout << taxis << std::endl;

    return 0;
}