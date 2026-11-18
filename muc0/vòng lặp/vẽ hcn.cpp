// Input 4 5
// Output
// *****
// *****
// *****
// *****

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
	ll n, m;
	cin >> n >> m;
	
	for(ll i = 1; i <= n; ++i) {
		for(ll j = 1; j <= m; ++j) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}
