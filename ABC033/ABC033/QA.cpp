

#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;

	cin >> str;


	for (int i = 0; i < 4; i++) {

		if (str[0] != str[i]) {

			cout << "DIFFERENT" << endl;
			exit(0);
		}



	}

	cout << "SAME" << endl;
	
	return 0;
}
