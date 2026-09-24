#include <iostream>

using namespace std;

int main () {
	int n; cin >> n;
	
	int dem;
	
	for ( int i = 1; i <= n; i++) {
		if ( i % 3 == 0) {
			dem++;
		}
	}
	cout << dem;
	
	return 0;
}
