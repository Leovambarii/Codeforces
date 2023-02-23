#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a;
        map<int, int> numbers;
        cin >> n;
        for(int i=0; i<n; i++) {
            cin >> a;
            numbers[a]++;
        }
        int count = numbers.size();
        if((n-count)%2 == 1)
            count--;
        cout << count << endl;
    }
    return 0;
}