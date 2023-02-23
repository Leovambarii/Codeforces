#include <bits/stdc++.h>

int main() {
    int n, m, l;
    std::cin >> n >> m;
    int a[100001], sol[100001] = {0};
    bool v[100001];
    for(int i=1; i<=n; i++)
        std::cin >> a[i];
    for(int i=n; i>=1; i--) {
        if(!v[a[i]])
          sol[i]++;
        v[a[i]] = true;
    }
    for(int i=n; i>=1; i--)
        sol[i] += sol[i+1];
    for(int i=0; i<m; i++) {
        std::cin >> l;
        std::cout << sol[l] << std::endl;
    }

    return 0;
}