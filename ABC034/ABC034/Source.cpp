#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>

using namespace std;


int main() {

	int W, H;
	 int sum;
	cin >> W;
	cin >> H;
	

	vector<vector<int>> line(W+1,vector<int>(H+1,0));

	line[0][1] = 1;



	for (int i = 1; i <= W;i++) {

		for (int j = 1; j <= H; j++) {

			line[i][j] = line[i - 1][j] + line[i][j - 1];

		}

	}
	


	sum = line[W][H] % 1000000007;




	cout <<line[W][H]<<","<< sum << endl;
	cin >> W;
	return 0;
}


//QA
/*
int n, m;

cin >> n;
cin >> m;

if (n < m) {
cout << "Better" << endl;
}
else {
cout << "Worse" << endl;

}

*/


//QB
/*
int n;

cin >> n;

if (n % 2 == 1) {
cout << n + 1 << endl;
}
else {
cout << n - 1 << endl;
}
*/