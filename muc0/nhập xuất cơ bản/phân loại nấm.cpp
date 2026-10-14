/* Marisa đang phân tích một số cây nấm. 
Mỗi cây nấm có một chỉ số độc tố là T nhận giá trị từ 0.0 đến 10.0
Cây nấm:
Rất độc nếu có chỉ số độc tố từ  9.0 trở lên.
Độc nếu có chỉ số độc tố từ 5.0 đến 8.9
An toàn nếu có chỉ số độc tố dưới 5.0
Input
Một dòng gồm một số thực 
T gồm một chữ số thập phân trong khoảng 
0.0 đến 10.0
.
Output
Nếu cây nấm rất độc, in ra VERY TOXIC.
Nếu cây nấm độc, in ra TOXIC.
Nếu cây nấm an toàn, in ra SAFE. */

#include <iostream>

using namespace std;

int main () {
	float T;
	cout << "Nhap chi so doc: " ;
	cin >> T;
	
	if (T >= 0.0 && T <= 10.0) {
		if (T >= 9.0) {
		cout << "VERY TOXIC";
	}
		else if (T <= 8.9 && T >= 5.0)
		{cout << "TOXIC"; 
	}
		else if (T < 5.0)
		{ cout << "SAFE";
	}
	}
	return 0;
}
