#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--) {
        int n, sum=0, count_even=0, count_odd=0;
        std::cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            std::cin >> arr[i];
            sum += arr[i];
            if(arr[i]%2 != 0 || arr[i]==1)
                count_odd++;
            else
                count_even++;
        }
        if(sum%2 == 1 || sum==1)
            std::cout << "YES" << std::endl;
        else {
            if(count_odd>0 && count_even>0)
                std::cout << "YES" << std::endl;
            else
                std::cout << "NO" << std::endl;
        }
    }

    return 0;
}