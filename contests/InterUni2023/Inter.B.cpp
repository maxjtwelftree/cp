#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

	ll n;
    cin >> n;

    vector<ll> l(n);

    for (ll i = 0; i < n; i++) {
    	cin >> l[i];
    }

	sort(l.begin(), l.end());
	
	if(l.front() == 0) {
		cout << l.back() << endl;
	} else if (n == 2) {
		cout << accumulate(l.begin(), l.end(), 0) << endl;
	} else if(l.back() - l.front() > l[n - 2]) {
		cout << l.back() << endl;
	} else { // only thing that may not work 
		cout << l[n-1] + (l[n-1] - l[n-2]) << endl;
	}

    return 0;
}