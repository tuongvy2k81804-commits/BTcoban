//Input 5
//Output 
//*
//**
//***
//****
//*****

#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main () {
	ll n;
	cin >> n;
	
	for(ll i = 1; i <= n; ++i) {
		for(ll j = 1; j <= i; ++j) {
				cout << '*';
		}
		cout << endl;
	}
	return 0;
}
