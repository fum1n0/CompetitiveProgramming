
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {

	string s;
	int num;
	cin >> s >> num;

	rep(i,0,s.length()){
		if (s[i]!='a' && 'z' - s[i]  < num) {
			num -= ('z' + 1) - s[i];
			s[i] = 'a';
		}
	}


	
	while ('z' - s[s.length() - 1] < num) {
			num -= ('z' + 1) - s[s.length() - 1];
			s[s.length() - 1] = 'a';
		
	}

	if(num>0)s[s.length() - 1] = s[s.length() - 1] + num;



	cout << s << endl;
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

//QB
//int k, tmp;
//int calc = 0;
//std::vector<int>num;
//std::cin >> k;
//
//rep(i, 0, k) {
//	std::cin >> tmp;
//	num.push_back(tmp - 1);
//}
//
//rep(i, 0, num.size()) {
//	if (i < num[i]) {
//		if (i == num[num[i]])calc++;
//	}
//}
//
//std::cout << calc << std::endl;

