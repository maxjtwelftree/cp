#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll lo, hi;
    cin >> lo >> hi;


    vector<ll>heights(n);
    for(ll i = 0; i < n; i++) {
    	cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    ll lowest_height = heights[0];
    ll highest_height = heights.back();

    ll fence = lowest_height - lo;

    vector<ll> out;

    while(highest_height - fence <= hi && fence >= 0) {
  		out.push_back(fence);
  		fence--;
    }

    cout << out.size() << endl;
    for(ll i = out.size() - 1; i >= 0 ; i--) cout << out[i] << " ";

   
    return 0;
}