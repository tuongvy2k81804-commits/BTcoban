//Input 5
//Output 
//***** 
//****       
//***  
//**	   
//*		  


//c1
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
	ll n;
	cin >> n;
	
	for(ll i = 1; i <= n; ++i) {
		for(ll j = 1; j <= n - i + 1; ++j) {  
				cout << '*';
		}
		cout << endl;
	}
	return 0;
}




//c2
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
	ll n;
	cin >> n;
	
	for(ll i = n; i >= 1; --i) {
		for(ll j = i; j >= 1; --j) {  
				cout << '*';
		}
		cout << endl;
	}
	return 0;
}
