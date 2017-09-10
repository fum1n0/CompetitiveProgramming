
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	long long int R, B, x, y,highid,lowid,midid;
	
	cin >> R >> B;
	cin >> x >> y;

	

	lowid = 0;
	highid = max(R, B)+1  ;

	while (lowid <= highid) {
		midid = (lowid + highid) / 2;
		
		if (midid == abs((R-midid)/(x-1)) + abs((B - midid) / (y - 1)) ) {
			break;
			/* ’l‚Ì‘å¬‚ð’²‚×‚Ä’Tõ”ÍˆÍ‚ð‹·‚ß‚é */
		}
		else if ( midid  <  abs((R - midid) / (x - 1)) + abs((B - midid) / (y - 1))) {
			lowid = midid +1;
		}
		else {
			highid = midid-1 ;
		}
	}


cout << midid << endl;

	return 0;
}


//QA
//char a, b;
//
//cin >> a >> b;
//
//
//
//if (a + 32 == b) {
//	cout << "Yes" << endl;
//}
//else {
//	cout << "No" << endl;
//}

//QB
//unsigned long long int R, B, x, y;
//
//cin >> R >> B;
//cin >> x >> y;
