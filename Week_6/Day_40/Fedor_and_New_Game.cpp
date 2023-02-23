#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, x, count=0;
    cin >> n >> m >> k;
    int arr[1000];
    for(int i=0; i<=m; i++)
        cin >> arr[i];
    for(int i=0; i<m; i++) {
        x=0;
        for(int j=0; j<n; j++)
            if(((arr[i] >> j) & 1) != ((arr[m] >> j) & 1))
                x++;
        if(k >= x)
            count++;
    }
    cout << count << endl;

    return 0;
}