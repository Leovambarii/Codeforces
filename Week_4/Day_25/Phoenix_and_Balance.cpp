#include <bits/stdc++.h>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,tab[10000];
    cin >> t;
    while(t--)
    {
        long long int ans=0, pile_1=0, pile_2=0, k=0;
        cin >> n;
        for(int i=1; i<=n; i++)
            tab[k++] = pow(2,i);
        int div = n/2;
        pile_1 = tab[n-1];
        for(int i=0; i<=div-2; i++)
            pile_1 += tab[i];
        for(int i=div-1; i<n-1; i++)
            pile_2 += tab[i];
        cout << abs(pile_1-pile_2) << endl;
    }

    return 0;
}