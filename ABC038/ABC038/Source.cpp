
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {
	int N;
	long long int tmp,res = 0;

	cin >> N;
	vector<long long int>num(N, 0);
	vector<long long int>sum(N, 0);

	

	rep(i, 0, N) {
		cin >> tmp;
		num[i] = tmp;
		if (i == 0)sum[i] = 1;
		else {
			if (num[i - 1] < tmp) {
				sum[i] = sum[i - 1] + 1;
			}
			else sum[i] = 1;
		}
	}

	rep(i, 0, N)res += sum[i];
		
	cout << res << endl;
	
	return 0;
}




//QA

//string str;
//cin >> str;
//
//if (str[str.length() - 1] == 'T') {
//	cout << "YES" << endl;
//}
//else {
//	cout << "NO" << endl;
//}



//QB


//int H1, W1, H2, W2;
//
//cin >> H1 >> W1;
//cin >> H2 >> W2;
//
//if (H1 == H2 || W1 == H2 || H1 == W2 || W1 == W2)cout << "YES" << endl;
//else cout << "NO" << endl;