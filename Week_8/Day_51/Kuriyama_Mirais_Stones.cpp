#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, question, l, r;
    long long arr[100010], sum[100010]={0}, sum_sort[100010]={0};
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> arr[i-1];
        sum[i] = sum[i-1]+arr[i-1];
    }
    sort(arr,arr+n);
    for(long long i=1; i<=n; ++i)
        sum_sort[i] = sum_sort[i-1]+arr[i-1];
    cin>>m;
    for(long long i=0; i<m; i++) {
        cin >> question >> l >> r;
        if(question == 1)
            cout << sum[r]-sum[l-1] << endl;
        else
            cout << sum_sort[r]-sum_sort[l-1] << endl;
    }
    return 0;
}