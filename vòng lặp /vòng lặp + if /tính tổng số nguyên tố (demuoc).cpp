#include <iostream>

using namespace std;

int main () {
	int n; cin >> n;
	
	int tong = 0;
	
	for ( int i = 2; i <= n; i++) {
		int dem = 0;
	
		for ( int j = 2; j <= i - 1; j++) {
			if ( i % j == 0) {
				dem ++;
			}
	}
		if ( dem == 0) {
			tong += i;
		}
	}
		cout << tong;
		
		return 0;
	}
	
			

	
