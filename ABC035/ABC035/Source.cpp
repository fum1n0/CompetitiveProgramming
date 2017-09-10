
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
	//QC
	int N, Q;
	cin >> N >> Q;

	vector<int>num(N+1, 0);
	vector<int>x(Q), y(Q);

	for (int i = 0; i < Q; i++) {
	cin >> x[i];
	cin >> y[i];
	
	}


	rep(i, Q) {

		num[x[i]-1]++;
		num[y[i]]--;

	}

	for (int i = 1; i < N; i++) {
		num[i] += num[i - 1];
	}

	for (int i = 0; i < N; i++)cout << num[i]%2;
	cout << endl;


	return 0;
}

//QA
/*
int w, h;

cin >> w >> h;

if (w % 16 == 0 && h % 9 == 0) {
cout << "16:9" << endl;
}
else {
cout << "4:3" << endl;
}
*/

//QB
/*string str;
int t;
int q=0;
int x = 0, y = 0;

cin >> str;
cin >> t;


rep(i, str.length()) {

if (str[i] == 'U')y++;
if (str[i] == 'D')y--;
if (str[i] == 'L')x--;
if (str[i] == 'R')x++;
if (str[i] == '?')q++;
}

if (t == 1) {
if (x > 0) {
x += q;
}
else if (x < 0) {
x -= q;
}

if (x == 0) {
if (y > 0) {
y += q;
}
else if (y < 0) {
y -= q;
}
}


if (x == 0 && y == 0) {
cout << q << endl;
}
else {
cout << abs(x) + abs(y) << endl;
}

}
else {
for (int i = q; i >0; i--) {
if (x > 0) {
x--;
}
else if (x < 0) {
x++;
}else if (x == 0) {
if (y > 0) {
y--;
}
else if (y <= 0) {
y++;
}
}
}

cout << abs(x) + abs(y) << endl;



}
*/


//QC
/*int N, Q;
cin >> N >> Q;

vector<int>num(N, 0);
vector<int>x(Q), y(Q);

for (int i = 0; i < Q; i++) {
cin >> x[i];
cin >> y[i];
}

rep(i, Q) {

for (int j = x[i]-1; j <= y[i]-1; j++) {

if (num[j] == 0) {
num[j] = 1;
}
else {
num[j] = 0;
}


}


}

rep(i,N) {
cout << num[i];
}
cout << endl;*/