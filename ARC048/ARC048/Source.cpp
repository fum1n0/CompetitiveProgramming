#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)



int main() {







	return 0;
}


//QA
/*
int a, b,c;

cin >> a;
cin >> b;


if (a < 0 && b < 0) {

c = abs(a) - abs(b);

}
else if (a < 0) {
c = ((-1) - a) + (b - 1) + 1;

}
else {

c = b - a;
}


cout << c << endl;


*/

//QB
/*
#define MAX 100000
int N;
cin >> N;

vector<int> rate(N, 0), hand(N, 0);

rep(i, N) {
cin >> rate[i];
cin >> hand[i];
hand[i]--;
}

vector<int>rate_point(MAX + 1, 0);
vector<vector<int>> hand_point(MAX + 1, vector<int>(3, 0));

rep(i, N) {
rate_point[rate[i]]++;
hand_point[rate[i]][hand[i]]++;
}


for (int i = 1; i < MAX+1; i++)rate_point[i] += rate_point[i - 1];


rep(i, N) {

int win, lose, dr;


lose = rate_point[MAX] - rate_point[rate[i]];
win = rate_point[rate[i]-1];

win += hand_point[rate[i]][(hand[i]+1)%3];
lose += hand_point[rate[i]][(hand[i] + 2) % 3];
dr = hand_point[rate[i]][hand[i]] -1;

cout << win << " " << lose << " " << dr << endl;

}
*/





