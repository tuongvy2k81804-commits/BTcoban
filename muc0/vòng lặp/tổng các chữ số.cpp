/*
 Tính tổng các chữ số của số nguyên n.

Input: Nhập một số nguyên (n) 

-10^18 <= n <= 10^18

Output: In ra tổng các chữ số của (n), không tính dấu âm.
  */

//cach 1
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main () {
	ll n, tong = 0;
	cin >> n;
	
	if (n < 0) n = n * (-1);
	
	while (n > 0) {
		tong = tong + n % 10;
		n = n / 10;
	}
	cout << tong;
	return 0;
}

//cach 2
#include <bits/stdc++.h>
#define ll long long
 
using namespace std;
 
int main () {
	ll n, tong = 0;
	cin >> n;
	 
	for (ll i = abs(n); i > 0; i = i / 10)
		tong += i % 10;
		
	cout << tong;
	return 0;
}
