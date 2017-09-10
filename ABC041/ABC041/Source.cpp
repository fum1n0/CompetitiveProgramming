
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {
	
	long long int a, b, c, x, sum;
	
	x = 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 * 10 + 7;
	
	
	cin >> a >> b >> c;
	
	a = a % x;
	b = b % x;
	c = c % x;

	sum = a*b;

	sum = sum % x;
	sum *= c;


	cout << sum % x << endl;
	
	return 0;
}


//QA


//string str;
//int i;
//cin >> str;
//cin >> i;
//
//cout << str[i - 1] << endl;


//QB







//QC

//unsigned long long int num;
//cin >> num;
//
//vector<unsigned long long int>N(num);
//
//vector<pair<unsigned long long int, unsigned long long int>>pa(num);
//
//for (unsigned long long int i = 0; i < num; i++) {
//	unsigned long long int tmp;
//	cin >> tmp;
//	pa[i] = make_pair(tmp, i + 1);
//}
//
//sort(pa.begin(), pa.end());
//
//for (int i = num - 1; i >= 0; i--) {
//
//
//	cout << pa[i].second << endl;
//}


