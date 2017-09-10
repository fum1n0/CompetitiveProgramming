#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	double N,ave_x=0,ave_y=0;
	cin >> N;

	vector<double>x;
	vector<double>y;
	vector<double>c;


	for (int i = 0; i < N; i++) {
		double tmp1,tmp2,tmp3;
		cin >> tmp1 >> tmp2 >> tmp3;

		x.push_back(tmp1);
		y.push_back(tmp2);
		c.push_back(tmp3);
		
	}

	for (int i = 0; i < N; i++) {
		ave_x += x[i];
		ave_y += y[i];
	}

	ave_x /= N;
	ave_y /= N;

	cout << max(abs(x[0] - ave_x), abs(y[0] - ave_y)) << endl;

	cin >> N;


	return 0;
}


//QA
/*
string str;
double a,b,c,d;

cin >> str;
cin >> a >> b >> c >> d;


for (double i = 0; i < a; i++) {
cout << str[i];
}

cout << '"';

for (double i = a; i < b; i++) {
cout << str[i];
}

cout << '"';

for (double i = b; i < c; i++) {
cout << str[i];
}

cout << '"';

for (double i = c; i < d; i++) {
cout << str[i];
}

cout << '"';


for (double i = d; i < str.length(); i++) {
cout << str[i];
}


cout << endl;
*/
