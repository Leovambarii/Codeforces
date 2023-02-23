#include<bits/stdc++.h>

int main(){
    int t, n;
    std::cin >> t;
    while(t--){
        std::cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
            std::cin >> arr[i];
        int max = std::distance(arr, std::max_element(arr, arr + n)) + 1;
        int min = std::distance(arr, std::min_element(arr, arr + n)) + 1;
        int max_b = abs(std::distance(arr+n, std::max_element(arr, arr + n)));
        int min_b = abs(std::distance(arr+n, std::min_element(arr, arr + n)));
        int count = 0;
        int mrr[4] = {max, min, max_b, min_b};
        count += *std::min_element(mrr, mrr + 4);
        if(*std::min_element(mrr, mrr+4) == max || *std::min_element(mrr, mrr+4) == max_b)
            count += std::min(std::min(abs(min-max), min_b), std::min(min, min_b));
        else
            count += std::min(std::min(abs(max - min), max_b), std::min(max, max_b));
        std::cout << count << std::endl;
    }
    return 0;
}