#include <bits/stdc++.h>

int main() {
    long long n, count_left=1, count_right=1, count=1;
    std::cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++)
        std::cin >> arr[i];
    std::sort(arr, arr+n);
    long long left=arr[0], right=arr[n-1];
    if(left != right) {
        for(int i=1; i<n; i++) {
            if(left == arr[i])
                count_left++;
            else
                break;
        }
        for(int j=n-2; j>=0; j--) {
            if(right == arr[j])
                count_right++;
            else
                break;
        }
        count = count_left*count_right;
    } else
        count = (n*(n-1))/2;
    std::cout << right-left << " " << count << std::endl;

    return 0;
}