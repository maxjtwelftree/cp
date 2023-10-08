#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string in;

    char k;
    cin >> n >> in;
    k = in[in.size() - 1];

    vector<string> votes(n);

    for(int i = 0; i < n; i++) cin >> votes[i];

    int best = INT_MAX;
    for(string vote : votes) {
    	int x = stoi(vote);
    	bool found = false;
    	while(!found) {
    		string s = to_string(x);
    		for(char c : s) {
    			if(c == k) {
    				found = true;
    				break;
    			}
    		}
    		x++;
    	}
    	best = min(best, x - stoi(vote) - 1);
    	x = stoi(vote);
    	found = false;
    	while(!found) {
    		string s = to_string(x);
    		for(char c : s) {
    			if(c == k) {
    				found = true;
    				break;
    			}
    		}
    		x--;
    	}
    	best = min(best, stoi(vote) - x + 1);
    }

	cout << best << endl;   

}