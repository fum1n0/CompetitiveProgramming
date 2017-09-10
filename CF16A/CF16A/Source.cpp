
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	int k, tmp;
	int calc = 0;
	vector<int>num;
	cin >> k;
	rep(i, 0, k) {
		cin >> tmp;
		num.push_back(tmp);
	}

	rep(i, 0, k) {

		if (i < num[i]) {
			if (num[i] == num[num[i]])calc++;
		}
		
	}


	std::cout << calc << std::endl;
	
	return 0;
}



//QA

//string s;
//
//cin >> s;
//rep(i, 0, 4) {
//	cout << s[i];
//}
//
//cout << " ";
//rep(i, 4, s.length())cout << s[i];
//cout << endl;


