/*Tìm nghiệm nguyên của phương trình: ax+b=0
Input
Một dòng gồm hai số nguyên a,b
Output
In một số nguyên là nghiệm của phương trình.
Nếu có vô số nghiệm in ra INFINITE SOLUTIONS. 
Nếu không tồn tại nghiệm nguyên, in ra NO SOLUTION.
Điều kiện 100≤a,b≤100 */

#include <iostream>
#define ll long long

using namespace std;

int main () {
	ll a, b;
	cin >> a >> b;
	
	if (a == 0) {
		if (b == 0) {
			cout << "INFINITE SOLUTIONS";
	}
		else{
			cout <<"NO SOLUTION";
		}
	}
	
	else if (-b % a == 0) {       
		cout << -b / a;
	}
	
	else {
		cout << "NO SOLUTION";      // nghiệm không nguyên
	}
	return 0;
}
