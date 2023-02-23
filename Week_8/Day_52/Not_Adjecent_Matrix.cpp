#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n==2) {
            cout << -1 << endl;
            continue;
        }
        int a[n][n];
        if(n%2 == 1) {
            int k = 1;
            int x = 0;
            while(k <= n*n) {
                int i = (x/n)%n;
                int j = x%n;
                a[i][j] = k;
                k++;
                x += 2;
            }
        } else {
            int k = 1;
            for(int i=0; i<n; i++){
                if(i%2 == 0)
                    for(int j=0; j<n; j+=2)
                        a[i][j] = k++;
                else
                    for(int j=1; j<n; j+=2)
                        a[i][j] = k++;
            }
            for(int i=0; i<n; i++) {
                if(i%2 == 1)
                    for(int j=0; j<n; j+=2)
                        a[i][j] = k++;
                else
                    for(int j=1; j<n; j+=2)
                        a[i][j] = k++;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}