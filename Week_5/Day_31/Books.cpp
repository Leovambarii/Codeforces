#include<bits/stdc++.h>

long int book[100001];
int main() {
    long int n, t;
    while(std::cin >> n >> t) {
        for(int i=0; i<n; i++)
            std::cin >> book[i];
        int j=-1, sum=0, count=0;
        for(int i=0; i<n; i++) {
            if(sum+book[i] <= t)
                sum += book[i];
            else {
                sum += book[i];
                while(sum > t) {
                    j++;
                    sum-=book[j];
                }
            }
            count=std::max(count, i-j);
        }
        std::cout << count << std::endl;
    }
    return 0;
}