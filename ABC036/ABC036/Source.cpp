
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;

int main() {






	return 0;
}


//QA
/*
int A, B;

cin >> A >> B;

if (B%A == 0) {
cout << B / A << endl;
}
else {
cout << B / A + 1 << endl;
}
*/

//QB
/*
int N;
cin >> N;

vector<vector<char>>map(N, vector<char>(N));
vector<vector<char>>change(N, vector<char>(N));

for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
cin >>map[i][j];

}
}

for (int i = 0; i < N;i++){
for (int j = 0; j < N;j++){
change[j][N-i-1] =map[i][j];

}
}

for (int i = 0; i < N;i++){
for (int j = 0; j < N;j++){
cout << change[i][j];

}
cout << endl;
}
*/

//QC
/*
int N;
cin >> N;

vector<int>num(N);
vector<int>rank(N);

rep(i, 0, N) {
cin >> num[i];
rank[i] = num[i];
}


sort(rank.begin(), rank.end());
rank.erase(unique(rank.begin(), rank.end()),rank.end());


rep(i, 0, N) {
int x = lower_bound(rank.begin(), rank.end(), num[i]) - rank.begin();
cout << x << endl;
}

*/



