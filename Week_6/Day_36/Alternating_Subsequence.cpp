#include <bits/stdc++.h>

int main() {
	int t;
	std::cin >> t;
	while(t--) {
		long long n, x;
		std::cin >> n;
		std::vector<long long> vect;
		for(int i=0; i<n; i++) {
			std::cin >> x;
			vect.emplace_back(x);
		}
		long long max=-1e11, sum=0;
		bool check = true;
		for(int i=0; i<n; i++) {
			if(check) {
				if(vect[i] < 0) {
					if(max > -1e10)
						sum += max;
					max = -1e11;
					check = false;
				}
			}
			else {
				if(vect[i]>0) {
					if(max > -1e10)
						sum+=max;
					max = -1e11;
					check = true;
				}
			}
			max = std::max(vect[i],max);
		}
		if(max > -1e10)
			sum += max;
		std::cout << sum << std::endl;
	}

    return 0;
}