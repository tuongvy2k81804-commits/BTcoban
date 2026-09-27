/*Nhập vào dãy n số. Hãy in ra số lớn nhất, bé nhất của dãy.

Input
Dòng 1: chứa giá trị n (1 ≤ n ≤ 100)
Dòng 2: chứa n số thực a1, a2, ..., an
Output
Một dòng duy nhất ghi hai số là giá trị lớn nhất và giá trị nhỏ nhất của dãy.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	int n; cin >> n;
	float a[n];
	
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	float tgln = a[0];
	float tgnn = a[0];
	
	for (int i = 0; i < n; ++i) {
		if (a[i] > tgln) {
			tgln = a[i];
		}
		if ( a[i] < tgnn) {
			tgnn = a[i];
		}
	}
	cout << fixed << setprecision(2) << tgln << " " << tgnn;
}
