/*Nhập vào dãy n số thực. 
Sau đó, tính tổng dãy, tổng các số âm, tổng các số dương và tổng các số ở vị trí chẵn, vị trí lẻ trong dãy.
Input
Dòng đầu chứa số nguyên dương n (1 ≤ n ≤ 100)
Dòng 2 gồm n số thực a1, a2, ..., an.
Output
Dòng 1 chứa kết quả của câu 1 gồm: tổng dãy, tổng các số âm, tổng các số dương, 
tổng các số vị trí chẵn, tổng các số vị trí lẻ 
(các giá trị cách nhau 1 dấu cách và lấy 2 chữ số phần thập phân).
*/

#include <iostream>
#include <iomanip>       // fixed << setprecision() 
#define fl float

using namespace std;

int main (){
	int n; cin >> n;
	fl a[n]; 
	
	fl tong = 0;
	fl tongam = 0;
	fl tongduong = 0;
	fl chan = 0;
	fl le = 0;
	
	for (int i = 0; i < n; ++i) {         //chỉ số mảng là số nguyên
		cin >> a[i];                
		
		tong += a[i];
		
		if (a[i] < 0) {
			tongam += a[i];
		}
		if (a[i] >= 0) {
			tongduong += a[i];
		}
		
		if (i % 2 == 0) {                    //vtri bd = 1
			le += a[i]; 
		}
		if (i % 2 != 0) {
			chan += a[i];
		}
		
		
	}
	cout<< fixed << setprecision(2) << tong << " " << tongam << " " << tongduong << " " << chan << " " << le;
	
	return 0;
}
