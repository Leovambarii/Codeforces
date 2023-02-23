#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, months=12, sum=0, count=0;
    int arr[months];
    cin >> k;
    for(int i=0; i<months; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum < k)
        cout << -1 << endl;
    else {
        sort(arr, arr+months);
        sum = 0;
        for(int i=months-1; i>=0; i--) {
            if(sum >= k)
                break;
            sum += arr[i];
            count++;
        }
        cout << count << endl;
    }

    return 0;
}