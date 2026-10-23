//Cho mảng A gồm n phần tử nguyên. Hãy tìm giá trị chênh lệch lớn nhất giữa hai phần tử liên tiếp trong mảng.
// a[i] <= 1000 && a[i] >= 1
#include <iostream>
#define ll long long
#include <cmath>

using namespace std;

int main () {
	ll n; cin >> n;
	ll a[n];
	
	ll chenhlech;
	ll tg;
	
	for (ll i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	for (ll j = 0; j < n - 1; ++j) {             // phần tử cuối k thể và k cần lấy sau trừ trước nữa
                                              // a[j] - a[j - 1] thì có thể chạy đến j < n	
		chenhlech = abs(a[j + 1] - a[j]);
		
		if (chenhlech < tg ) {
			tg = chenhlech;
		}
	}
	
		cout << chenhlech;
		
		return 0;
	}
	
	
