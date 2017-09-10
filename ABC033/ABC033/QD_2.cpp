
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)(n);i++)

const double EPS = 1e-14, pi = 3.1415926535897932384626;

int main() {

	int num;
	double tmp;
	long long int nine = 0, eight = 0, sum;

	cin >> num;
	sum =(long long int)num*(num - 1)*(num - 2) / 6;

	vector<vector<int>> point;
	
	point = vector<vector<int>>(num, vector<int>(2));

	for (int i = 0; i < num; i++) {
		cin >> point[i][0];
		cin >> point[i][1];
	}
	
	for (int i = 0; i < num; i++) {
		vector<double>rad;

		for (int j = 0; j < num; j++) {
			if (i != j) {
				tmp = atan2(point[j][0] - point[i][0], point[j][1] - point[i][1]) ;
				rad.push_back(tmp);
			}
		}

		sort(rad.begin(), rad.end());

		rep(i, num - 1)rad.push_back(rad[i] + pi*2);

		rep(j, num - 1) {
			int x = lower_bound(rad.begin(), rad.end(), rad[j] + pi / 2 - EPS) - rad.begin();
			int y = upper_bound(rad.begin(), rad.end(), rad[j] + pi / 2 + EPS) - rad.begin();
			int z = lower_bound(rad.begin(), rad.end(), rad[j] + pi) - rad.begin();

			nine += y - x;
			eight += z - y;

		}
	}

	cout << sum - (nine + eight) << " " << nine << " " << eight << endl;
	cin >> num;

	return 0;
}
