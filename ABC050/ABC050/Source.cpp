
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)


using namespace std;

int main() {

	unsigned long long int p, res, n, tmp,a,b;
	cin >> n;
	a = 0;
	b = 0;
	res = 1;
	res += n / 2;
	int md = (int)pow(10, 9) + 7;
	res += n;
	res = res % md;








	cout << res << endl;
	cin >> res;
	return 0;
}
