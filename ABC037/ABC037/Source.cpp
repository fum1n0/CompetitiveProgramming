
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	int n, k, count = 0;
	cin >> n >> k;
	vector<int>harf;

	if (n % 2 == 1) {
		harf =  vector<int>(1,0) ;
		harf[0] = n / 2;
	}
	else {
		harf = vector<int>(2, 0);
		harf[0] = n / 2 - 1;
		harf[1] = n / 2;

	}

	long long int sum = 0;

	vector<vector<long long int>>num(n,vector<long long int>(2,0));
	vector<vector<long long int>>res(k,vector<long long int>(n-k+1,0));

	rep(i, 0, n) {
		cin >> num[i][0];

		if (n % 2 != 0) {
			
			if (harf[0] > i) {
				num[i][1] = i + 1;
			}
			else if (i == harf[0]) {
				num[i][1] = i + 1;
			}
			else {
				num[i][1] = n - i;
			}

		}
		else {

			if (harf[0] > i) {
				num[i][1] = i + 1;
			}
			else if (i == harf[0] || i==harf[1]) {
				num[i][1] = i;
			}
			else {
				num[i][1] = n - i;
			}

		}

	}


	
	rep(i, 0, n) {
	
		sum += num[i][0] * num[i][1];

	}


	cout << sum << endl;
	cin >> sum;
	return 0;
}

//QA
/*
int a, b, c, mi;

cin >> a >> b >> c;

mi = min(a, b);

cout << c / mi << endl;
*/

//QB
/*
int n,t,l,r,ch;

cin >> n >> t;

vector<int>num(n, 0);


rep(i, 0, t) {
cin >> l >> r >> ch;
for (int j = l-1; j < r; j++) {
num[j] =ch ;
}


}

rep(i, 0, n)cout << num[i] << endl;
*/
