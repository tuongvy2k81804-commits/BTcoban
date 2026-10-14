/* Nhập vào 1 số nguyên từ 0 đến 9
  in ra cách đọc */
#include <iostream>
#include <string>

using namespace std;

int main () {
	int a; cin >> a;
	string cachdoc[10] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
	
	if (a <= 9 && a >= 0) {
		cout << cachdoc[a];
	}
	else {
		cout << "so khong hop le";
	}
	return 0;
}
