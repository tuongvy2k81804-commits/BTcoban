#include <iostream>

using namespace std;

int main () {
	
	for ( int i = 2; i <= 9; i++) { // bảng cửu chương 2 đến 9
		
		for ( int j = 1; j <= 10 ; j++) { // nhân 1 đến 10
			cout << i << "x" << j << "=" << i*j << "\n";
		}
		cout << "\n";
	}
	return 0;
}
