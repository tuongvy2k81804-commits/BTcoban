#include <iostream>

using namespace std;

int main () {
	int n; cin >> n;
	
	int tong = 0;
	
	for ( int i = 2; i <= n; i++) {      // xét từ i = 2
		int dem = 0;
	
		for ( int j = 2; j <= i - 1; j++) {        // j <= i - 1 ( lúc này n là n thứ i)
			if ( i % j == 0) {
				dem ++;
			}
	}
		if ( dem == 0) {          //tổng đặt ngoài for j, vì đặt trong j, mỗi lần j tăng, đem lại về 0
			tong += i;
		}
	}
		cout << tong;
		
		return 0;
	}
	
			

	
