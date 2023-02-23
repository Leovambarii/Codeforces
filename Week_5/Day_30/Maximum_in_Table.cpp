#include <bits/stdc++.h>

int main() {
    int n, max=1;
    std::cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(j==0 || i == 0)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
            max = std::max(max, arr[i][j]);
        }
    }
    std::cout << max << std::endl;
    return 0;
}