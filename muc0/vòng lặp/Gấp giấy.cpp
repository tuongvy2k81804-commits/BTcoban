/*
  Một tờ giấy khi gấp làm đôi thì độ dày của nó tăng gấp đôi.

Ban đầu, bạn có một tờ giấy có độ dày 1 cm. Bạn muốn độ dày của tờ giấy đạt ít nhất n cm.

Hãy tính số lần gấp ít nhất cần thực hiện để đạt được độ dày mong muốn.

Input: Một số nguyên n.

Output: In ra số lần gấp ít nhất cần thực hiện.
Input:
7
Output:
3
*/

//cach 1
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
	ll DoDayToiThieu;
	cin >> DoDayToiThieu;
	
	ll SoLanGap = 0, DoDay = 1;
	
	while(DoDay < DoDayToiThieu) {
		DoDay *= 2;
		SoLanGap++;
	}	
	
	cout << SoLanGap;

	return 0;
}

// cach 2
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
	ll DoDayToiThieu;
	cin >> DoDayToiThieu;
	
	ll dem = 0;
	
	for (ll i = 1; i < DoDayToiThieu; i*=2) {
		dem++;
	}
	cout << dem;
	
	return 0;
}
