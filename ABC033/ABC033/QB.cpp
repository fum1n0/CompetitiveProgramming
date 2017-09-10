
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	int N,sum=0;
	cin >> N;

	vector<string> str(N);
	vector<int> num(N);

	for (int i = 0; i < N; i++) {

		cin >> str[i];
		cin >> num[i];
		sum += num[i];
	}

	for (int i = 0; i < N; i++) {

		if (num[i] > sum / 2) {
			cout << str[i] << endl;
			exit(0);
		}

	}

	cout << "atcoder" << endl;


	return 0;
}
