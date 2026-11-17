//cách 1

#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	int max = a, min = a;
	
	if (b >= max) max = b;
	if (c >= max) max = c;
	
	if (b <= min) min = b;
	if (c <= min) min = c;
	
	int mid = a;
	if (a == b || b == c) mid = b;
	// a = c ko co => k thuc hien => mid = a
	else if(b > min && b < max) mid = b;
	else if(c > min && c < max) mid = c;
	
	cout << min << ' ' << mid << ' ' << max;
	
	return 0;
}

//cách 2
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c;
	cin >> a >> b >> c;
	
	if (a > b) swap(a, b);
	if (a > c) swap (a, c);
	if (b > c) swap (b, c);
		
	cout << a << ' ' << b << ' ' << c;
	
	return 0;
}
