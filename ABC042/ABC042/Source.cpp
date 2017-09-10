
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	int m,tmp;
	
	string str;
	cin >> str;
	cin >> m;

	vector<int>num(10);
	rep(i, 0, 10) {
		num[i] = i;
	}

	sort(num.begin(), num.end());

	rep(i, 0, m) {
		cin >> tmp;
		num[tmp] = 9;
	}

	sort(num.begin(), num.end());

	char numb[10] ;
	rep(i, 0, 10 - m) {
		string tmps = to_string(num[i]);
		numb[i] = tmps[0];
	}
	
	int res = 0;

	rep(i, 0, str.size()) {
		bool ch = false;	
		int k = 0;
		if (stoi(str) <= res) {
			rep(v, 0, str.size() - i) {
				int tnp = (int)(numb[0] - '0');
				res += tnp * pow(10, str.size() - i - 1-v);
			}
			break;
		}
		while (ch!=true&&k<10-m){

			if (str[i] <= numb[k]) {
				int tnp = (int)(numb[k] - '0');
				res += tnp * pow(10,str.size()-i-1);
				ch = true;
			}

			k++;
		}

	}


	if (res < stoi(str)) {
		int tnp = (int)(numb[0] - '0');
		if (tnp != 0) {
			res = tnp * pow(10, str.size());
		}
		else {
			tnp = (int)(numb[1] - '0');
			res = tnp * pow(10, str.size());
		}

		rep(v, 0, str.size()) {
			int tnp = (int)(numb[0] - '0');
			res += tnp * pow(10, str.size() - 1 - v);
		}



	}


	

		cout<<res<<endl;
		cin >> res;



	return 0;
}






//vector< vector<int> > str(n, vector<int>(l));

//QA

//int a, five = 0, sev = 0;
//rep(i, 0, 3) {
//	cin >> a;
//	if (a == 5)five++;
//	else if (a == 7)sev++;
//
//}
//
//if (five == 2 && sev == 1)cout << "YES" << endl;
//else cout << "NO" << endl;


//QB
//
//int n, l;
//
//cin >> n >> l;
//vector<string>word(n);
//
//
//
//rep(i, 0, n) {
//	cin >> word[i];
//}
//
//sort(word.begin(), word.end());
//
//
//rep(i, 0, n)cout << word[i];
//cout << endl;





