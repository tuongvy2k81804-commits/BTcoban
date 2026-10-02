/*Cho dãy số gồm n số thực. Sau đó:

Tìm số âm đầu tiên trong dãy
Tìm số dương cuối cùng trong dãy
Vị trí đầu tiên và vị trí cuối cùng của phần tử x trong dãy.
Input
Dòng đầu chứa số nguyên dương n và x (1 ≤ n ≤ 100)
Dòng 2 gồm n số thực a1, a2, ..., an.
Output
Dòng 1: giá trị của số âm đầu tiên trong dãy, giá trị của số dương cuối cùng trong dãy
Dòng 2: vị trí đầu tiên và cuối cùng của phần tử x trong dãy*/

#include <iostream>
#define db double

using namespace std;

int main () {
	
	int n; cin >> n;
	db a[n];
	db x; cin >> x;
	
	db soamdau, soduongcuoi;
	int vitridau, vitricuoi;              //vị trí dùng int
	
	for (int i = 0; i < n; ++i) {
		cin >>  a[i];
	}
	
	for (int i = 0; i < n; ++i) { 
		if ( a[i] < 0) {
			soamdau = a[i];
			break;
		}
	}
	
	for (int i = 0; i < n; ++i) {     
		if (a[i] == x) {
			vitridau = i;
			break;
		}	
	}
	
	
	for (int i = n - 1; i >= 0; --i) {
		
		if (a[i] > 0) {
			soduongcuoi = a[i];
			break;
		}
	}
	
	for (int i = n - 1; i >= 0; --i) {
		if (x == a[i]) {
			vitricuoi = i;
			break;
		}
	}
	
	cout << soamdau << " " << soduongcuoi << "\n" << vitridau  << " " << vitricuoi; 
	
return 0;
}
