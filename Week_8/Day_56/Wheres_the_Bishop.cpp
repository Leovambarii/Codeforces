#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--) {
        int n=8, index_i, index_j;
        string st;
        string arr[n];
        bool ch = false;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++){
            int count=0;
            for(int j=0; j<n; j++){
                if(arr[i][j] == '#'){
                    count++;
                    index_j = j+1;
                }
            }
            if(count == 2)
                ch = true;
            if(ch==true && count==1) {
                index_i = i+1;
                break;
            }
        }
        cout << index_i << " " << index_j << endl;
    }
}