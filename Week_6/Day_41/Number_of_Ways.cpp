#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, cnt=0, ans=0;
    cin >> n;
    long long sum[n+2]={0}, arr[n+2]={0};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        sum[i] = sum[i-1] + arr[i];
    }
    if(sum[n]%3 != 0){
        cout << 0 << endl;
        return 0;
    }
    for(int i=1; i<n; i++){
        if(sum[i] == 2*(sum[n]/3))
            ans += cnt;
        if(sum[i] == sum[n]/3)
            cnt++;
    }
    cout << ans << endl;
    return 0;
}