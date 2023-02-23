#include<iostream>

int main(){
    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        int arr[n];
        for(int i=0; i<n; ++i)
            std::cin >> arr[i];
        for(int i=0; i<n/2; ++i)
            std::cout << arr[i] << " " << arr[n-i-1] << " ";
        if(n%2 != 0)
            std::cout << arr[n/2];
        std::cout << std::endl;
    }
    return 0;
}