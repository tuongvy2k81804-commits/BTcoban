/*Có hai người, một người sinh ngày a, tháng b, năm c. Người còn lại sinh ngày x, tháng y, năm z
Hỏi người nào nhiều tuổi hơn.
Đảm bảo ngày hợp lệ.*/
#include <iostream>

using namespace std;

bool ngayhople(int d, int m, int y) {
	if(y >= 1 && m >= 1 && m <= 12 && d >= 1) {
	
		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d <= 31 ) return true;
		
		else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30) return true;
		
		else if(m == 2) {
			
			if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
				if (d <= 29)	return true;
			}
			else {
				if (d <= 28)	return true;
				}

			}	
			return false;    // nếu  d <= 28 29 ko chạy, sẽ chạy false
		}
	else {
		return false;
	}
}

int main () {
	int d1, m1, y1, d2, m2, y2;
	cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
	
	if (ngayhople(d1, m1, y1) && ngayhople(d2, m2, y2)) {
		if (y1 > y2) cout << "2";
		else if (y1 < y2) cout << "1";
		else if (m1 > m2) cout << "2";
		else if (m1 < m2) cout << "1";
		else if (d1 > d2) cout << "2";
		else if (d1 < d2) cout << "1";
		else cout << "=";
	}
	else {
		cout << "ngay khong hop le";
	}
	return 0;
}
