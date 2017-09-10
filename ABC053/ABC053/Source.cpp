#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	vector<int>mp((int)pow(10, 5)+1, 0);
	int n;
	cin >> n;
	int sum = n;
	vector<int>num(n);

	rep(i, 0, n) {
		cin >> num[i];
		mp[num[i]]++;
	}

	sort(num.begin(), num.end());

	num.erase(std::unique(num.begin(), num.end()), num.end());

	rep(i, 0, num.size()) {
		if (mp[num[i]] > 1) {
			if (mp[num[i]] % 2 == 0)mp[num[i]] = 2;
			else mp[num[i]] = 1;
		}
	}

	int cnt = 0;

	rep(i, 0, num.size()) {
		if (mp[num[i]] == 2) cnt++;
	}

	if (cnt % 2 == 1)cnt=1;
	else cnt = 0;
	cout << num.size() - cnt << endl;


	return 0;
}