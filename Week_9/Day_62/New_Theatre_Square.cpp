#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, x, y, ans=0, count;
		cin >> n >> m >> x >> y;
		string lines[n+1];
		for(int i=0; i<n; i++)
			cin >> lines[i];
		bool flag = true;
		if(y > 2*x)
			flag = false;
		for(int i=0; i<n; i++) {
			bool is_white = false;
			count = 0;
			for(int j=0; j<m; j++) {
				if(lines[i][j] == '.') {
					is_white = true;
					count++;
				} else {
					is_white = false;
					if(flag)
						ans += ((count/2)*y)+((count%2)*x);
					else
						ans += (count*x);
					count = 0;
				}
			}
			if(is_white) {
				if(flag)
					ans += ((count/2)*y)+((count%2)*x);
				else
					ans += (count*x);
			}
		}
		cout << ans << endl;
	}
    return 0;
}