/*Kiểm tra hai đoạn thẳng có điểm chung
Cho hai đoạn thẳng AB và CD nằm trên trục số. Đoạn thẳng thứ nhất kéo dài từ điểm a đến điểm b, đoạn thẳng thứ hai kéo dài từ điểm c đến điểm d
Hãy kiểm tra xem hai đoạn thẳng có điểm chung hay không.

Input
- Một dòng gồm bốn số nguyên \(a, b, c, d\), lần lượt là hai đầu mút của hai đoạn thẳng.

Output
- Nếu hai đoạn thẳng có điểm chung, in ra YES.
- Ngược lại, in ra NO.

Ví dụ
Input:
1 2 2 3

Output:
YES
*/


// cach 1
#include <bits/stdc++.h>

using namespace std;

int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (c > b || d < a) cout << "NO";
	else cout << "YES";
	 
	return 0;
}

// cach 2
#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
 
	if (c >= a && c <= b) cout << "YES";
	else if(d >= a && d <= b) cout << "YES";
	else if (c <= a && d >= b) cout << "YES";
	else cout << "NO";
	 
	return 0;
}
