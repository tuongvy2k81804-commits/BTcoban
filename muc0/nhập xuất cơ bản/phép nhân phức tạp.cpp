/* Cho 3 số nguyên 
a,b,c Tính giá trị biểu thức: a×b%c Trong đó % là phép chia lấy dư 
1<a,b,c<10^9 */
// longlong có gtri đến 9*10^18
//int có giá trị đến 2*10^9

#include <iostream>
#define ll long long

using namespace std;

int main () {
	ll a, b, c;
	cin >> a >> b >> c;
	
	cout << "a * b % c = " << ((a % c) * (b % c) % c);
	
	return 0;
}
