
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {

	int len,num=0,zero=0;
	string str;
	
	cin >> str;
	len = str.length();
	vector<int> plus;
	vector < string >math ;

	plus.push_back(-1);

	for (int i = 0; i < len; i++) {
		if (str[i] == '+') {
			plus.push_back(i);
			num++;
		}
	}
	plus.push_back(len-1);


	//math.push_back(str.substr(0, plus[0]-1));

	for (int i = 0; i < num+1; i++) {

		math.push_back(str.substr(plus[i]+ 1, plus[i + 1] - plus[i]));
		
	}

	//math.push_back(str.substr(plus[num-1]));


	for (int i = 0; i < num+1; i++) {

		int length = math[i].length();
		int flag = 0;

		for (int j = 0; j < length; j++) {
			if (math[i][j] == '0')flag++;
		}

		if (flag == 0)zero++;

	}

	cout << zero << endl;


	return 0;
}
