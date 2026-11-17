// cach 1
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (c > b || d < a) cout << "NO";
	else cout << "YES";
	 
	return 0;
}

// cach 2
#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
 
	if (c >= a && c <= b) cout << "YES";
	else if(d >= a && d <= b) cout << "YES";
	else if (c <= a && d >= b) cout << "YES";
	else cout << "NO";
	 
	return 0;
}
