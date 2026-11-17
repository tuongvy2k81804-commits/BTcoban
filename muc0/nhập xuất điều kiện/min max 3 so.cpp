#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a, min = a;
	
	if (b >= max) b = max;
	if (c >= max) c = max;
	if (b <= min) b = min;
	if (c <= min) c = min;

	cout << min << ' ' << max;
	
	return 0;
}
