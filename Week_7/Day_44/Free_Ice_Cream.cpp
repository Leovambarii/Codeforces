#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, sum, x, count=0;
    char carrier;
    cin >> n >> sum;
    while(n--) {
        cin >> carrier >> x;
        if(carrier == '+')
            sum += x;
        else if(x <= sum)
            sum -= x;
        else
            count++;
    }
    cout << sum << " " << count << endl;
    return 0;
}