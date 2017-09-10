
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	long long int a, b, k, l,md,sum;

	cin >> a >> b >> k >> l;

	md = k%l;

		sum = b * (int)(k / l);

		if (md*a > b) {
			sum += b;
		}
		else {
			sum += md*a;
		}
	

	cout << sum << endl;
	cin >> a;
	return 0;
}