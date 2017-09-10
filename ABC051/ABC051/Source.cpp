
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<time.h>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	
		clock_t start, end;
		start = clock();
		int x[256][256];
		int i, j;
		for (i = 0; i<256; i++) {
			for (j = 0; j<256; j++) {
				x[j][i] = 0;
			}
		}
		end = clock();
		double time = (double)((double)end - (double)start) / (double)CLOCKS_PER_SEC;

		cout << time << "•b‚©‚©‚è‚Ü‚µ‚½" << endl;
		printf("%lf", time*10000000000000.0);
		cin >> i;







	//int K, S,x,y,z;
	//int cnt = 0;
	//cin >> K >> S;

	//for (x = 0; x <= K; x++) {
	//	y = x;
	//	z = x;
	//	if (x + y + z == S)cnt++;
	//}


	//for ( x=0; x <= K; x++) {
	//	for (int tmp = 1; tmp <= K; tmp++) {
	//		y = (x + tmp) % (K + 1);
	//		z = y;
	//		if (x + y + z == S)cnt = cnt + 3;
	//	}		
	//}


	//for (x = 0; x <= K-1; x++) {
	//	for (y = x + 1; y <= K; y++) {
	//		z = S - x - y;
	//		if(0 <= z && z <= K)cnt = cnt + 6;	
	//	}
	//}


	//cout << cnt << endl;
	

	return 0;
}