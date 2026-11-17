#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c;
	
	if (a == b) cout << c;
	if (a == c) cout << b;
	else cout << a;
	
	return 0;
}
