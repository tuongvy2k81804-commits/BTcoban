#include <iostream>

using namespace std;

int main () {
	
	for ( int i = 2; i <= 9; i++) { // 9 bảng cửu chương
	
		for (int j = 1; j <= 10; j++) {// nhân 1 đến 10
			cout << i << "x" << j << "=" << i * j << "\n";
		}
		cout << "\n";
	}
}
