#include <bits/stdc++.h>
#define ll long long

using namespace std;

//ucln c1
int UCLN(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}
//ucln c2
int UCLN2(int a, int b) {
	if (b == 0) return a;
	return (UCLN2(b, a % b));
}
//bcnn
ll BCNN(ll a, ll b) {
	return 1LL * a * b / UCLN(a, b);
}

int main () {
	int a, b;
	cin >> a >> b;
	cout << UCLN(a, b) << ' ' << BCNN(a, b);
	
	return 0;
}
