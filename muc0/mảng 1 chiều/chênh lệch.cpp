// Nhập mảng n phần tử
// in ra độ chênh lệch lớn nhất giữa 2 phần tử liền kề
#include <iostream>
#define ll long long
#include <cmath>

using namespace std;

int main () {
	ll n; cin >> n;
	ll a[n];
	
	if ( n >= 2) {           // nếu n < 2 thì không có chênh lệch
	
		ll chenhlech;
	
		for (ll i = 0; i < n; ++i) {
			cin >> a[i];
		}
	
		ll tg = abs(a[1] - a[0]);
	
		for (ll j = 1; j < n - 1; ++j) {      // phần tử cuối (n - 1) không cần trừ vì đã trừ trước đó
		                                    
			chenhlech = abs(a[j + 1] - a[j]);
		
			if (chenhlech > tg ) {
				tg = chenhlech;
			}
		}
	
			cout << tg;
		}
	
	else {
		cout << "khong hop le";
	}
		return 0;
	}
