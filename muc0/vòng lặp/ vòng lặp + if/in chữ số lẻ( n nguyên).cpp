// nhập vào số n nguyên, in ra các chữ số lẻ 
#include <iostream>
#define ll long long

using namespace std;

int main () {
	ll n; cin >> n;
	
	ll dao = 0;
	
	while (n != 0) {
		dao = dao * 10 + n % 10;
		n = n / 10; 
	}
	
	
	
	while (dao != 0) {
		ll sodu = dao % 10;
		
		if (sodu % 2 != 0) {
			cout << sodu << ' ';
		}
		
		dao = dao / 10;
	}
	}
