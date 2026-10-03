/*Nhập vào một dãy gồm n số thực. Sau đó thực hiện các nhiệm vụ sau:

Tính trung bình cộng các phần tử trong dãy
Tìm phần tử trong dãy chêch lệch với giá trị trung bình cộng là nhỏ nhất
Input
Dòng đầu chứa số nguyên dương n (1 ≤ n ≤ 100)
Dòng 2 gồm n số thực a1, a2, ..., an.
Output
Dòng 1: chứa giá trị TBC của dãy số
Dòng 2: giá trị của phần tử chênh lệch với giá trị trung bình cộng là nhỏ nhất.*/

#include <bits/stdc++.h>          //abs()
#define db double

using namespace std;

int main (){
	int n; cin >> n;
	db a[n]; 

//tbc

	db tong = 0;
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		tong += a[i];
	}
	
	db trungbinhcong = tong / n;

	cout << fixed << setprecision(2) <<trungbinhcong << "\n";
	
//chenh lech nho nhat
	db chenhlech;
	db sosanh = abs(trungbinhcong - a[0]);            //lưu kết qủa chênh lệch tbc và ptu đầu tiên
	db ketqua = a[0];                   // lưu ptu đã tính chênh lệch 	
	
	for ( int i = 0; i < n; ++i) {
		chenhlech = abs(trungbinhcong - a[i]);
		
			if (chenhlech < sosanh) {                //nếu xuất hiện gtri chenhlech < sosanh ( gtri cũ ) thì cập nhật sosanh
				sosanh = chenhlech;
				ketqua = a[i];                      
		}
	}
	cout << fixed << setprecision(2) << ketqua;                  //in ptu có độ chênh lệch nhỏ nhất 
	
	return 0;
}
