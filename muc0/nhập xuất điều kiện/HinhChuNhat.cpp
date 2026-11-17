/*
Cho độ dài 3 cạnh a,b,c
 của hình chữ nhật. In ra độ dài cạnh còn lại.
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c;
	
	if (a == b) cout << c;
	else if (a == c) cout << b;
	else if (b == c) cout << a;
	
	return 0;
}
