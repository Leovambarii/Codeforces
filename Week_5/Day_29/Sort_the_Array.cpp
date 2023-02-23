#include<bits/stdc++.h>

int main() {
    long long n, count=0, seg=0, l, r;
    std::cin >> n;
    long long arr_1[n], arr_2[n];
    for(int i=0; i<n; i++) {
        std::cin >> arr_1[i];
        arr_2[i] = arr_1[i];
    }
    std::sort(arr_2, arr_2+n);
    for(int i=0; i<n; i++) {
        if(arr_2[i]==arr_1[i])
            count++;
    }
    if(count==n) {
        std::cout << "yes" << std::endl;
        std::cout << "1 1" << std::endl;
        return 0;
    }
    for(int i=0; i<n-1, seg<1; i++) {
        if(arr_1[i]<arr_1[i+1])
            continue;
        else {
            l = i;
            r = i;
            while(arr_1[i]>arr_1[i+1] && i<n-1) {
                i++;
                r++;
            }
            std::sort(arr_1+l, arr_1+r+1);
            seg++;
            i--;
        }
    }
    for(int i=0; i<n;i++) {
        if(arr_2[i]!=arr_1[i]) {
            std::cout<< "no" << std::endl;
            return 0;
        }
    }
    std::cout << "yes" << std::endl;
    std::cout << l+1 <<" "<< r+1 << std::endl;
    return 0;
}