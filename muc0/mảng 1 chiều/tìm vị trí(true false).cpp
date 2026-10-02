	/*Cho dãy số gồm n số thực. Sau đó:

Tìm số âm đầu tiên trong dãy
Tìm số dương cuối cùng trong dãy
Vị trí đầu tiên và vị trí cuối cùng của phần tử x trong dãy.    ( bd = 0 )
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
	
	int n; cin >> n; int x; cin >> x;
	db a[n];
	
	db soamdau, soduongcuoi;
	int vitridau, vitricuoi; 
	             
	bool timsoam = 0;
	bool timsoduong = 0;
	bool timvtridau = 0;
	bool timvtricuoi = 0;
	
	for (int i = 0; i < n; ++i) {
		cin >>  a[i];
		
		if (a[i] < 0 && timsoam == 0) {
			soamdau = a[i];
			timsoam = 1;
		}
		if (a[i] == x && timvtridau == 0) {
			vitridau = i ;
			timvtridau = 1;
		}
	}
	
	for (int i = n - 1; i >= 0; --i) {
		
		if ( a[i] > 0 && timsoduong == 0) {
			soduongcuoi = a[i];
			timsoduong = 1;
		}
		if ( a[i] == x && timvtricuoi == 0) {
			vitricuoi = i;
			timvtricuoi = 1;
		}
	}
	cout << soamdau << " " << soduongcuoi << "\n" << vitridau << " " << vitricuoi;
	
	return 0;	
}
