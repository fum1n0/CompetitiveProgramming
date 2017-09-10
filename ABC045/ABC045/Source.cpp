
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {
	long long int sum ,num,tmp;
	string n,m,tmps;

	cin >> n;

	sum = stoi(n);

	rep(i, 0, n.length()) {
		tmps = n[i];
		tmp = stoi(tmps);
	}




	


	return 0;
}



//QA
//int a, b, h;
//cin >> a >> b >> h;
//cout << (a + b)*h / 2 << endl;



//QB
//string a, b, c;
//cin >> a >> b >> c;
//
//int num_a, num_b, num_c;
//num_a = a.length();
//num_b = b.length();
//num_c = c.length();
//
//int count_a = 0;
//int count_b = 0;
//int count_c = 0;
//int sw = 0;
//
//while (count_a <= num_a && count_b <= num_b && count_c <= num_c) {
//
//	switch (sw)
//	{
//	case 0:
//		if (count_a != num_a)sw = a[count_a] - 'a';
//		count_a++;
//		break;
//	case 1:
//		if (count_b != num_b)sw = b[count_b] - 'a';
//		count_b++;
//		break;
//	case 2:
//		if (count_c != num_c)sw = c[count_c] - 'a';
//		count_c++;
//		break;
//	default:
//		break;
//	}
//
//
//}
//
//
//if (count_a > num_a)cout << "A" << endl;
//else if (count_b > num_b)cout << "B" << endl;
//else cout << "C" << endl;










