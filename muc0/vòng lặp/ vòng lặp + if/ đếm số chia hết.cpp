// cho n, từ 1 đến n có bao nhiêu số chia hết cho cả 3 và 5
#include <iostream> 

using namespace std;

int main () {
	int n; cin >> n;
	
	int dem = 0;
	
	for ( int i = 1; i <= n; i ++) {
		
		if ( (i % 3 == 0) && (i % 5 == 0) ) {
			dem++;
		}
	}
	cout << dem;
	
	return 0;
}
