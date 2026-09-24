#include <iostream>

using namespace std;

int main () {
	int n; cin >> n;
	
	int tong;
	
	for ( int i = 1; i <= n; i ++) {
		tong += i;
	}
	cout << tong;
	
	return 0;
}
