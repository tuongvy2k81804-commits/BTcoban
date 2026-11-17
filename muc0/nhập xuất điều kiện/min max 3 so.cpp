#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a, min = a;
	
	if (b >= a && c >= a) max = a;
	if (c >= a && c >= b) max = c;
	if (b <= a && b <= c) min = b;
	if (c <= a && c <= b) min = c;
	
	cout << min << ' ' << max;
	
	return 0;
}
