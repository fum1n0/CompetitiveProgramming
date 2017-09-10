#include"iostream"
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;

int func(int);

int main() {

	
	int n;
	
	string str;

	cin >> str;
	cin >> n;
		
	int len = str.length();
	
	int ban = len;

	if (len<n) {
		cout << "0" << endl;
	}
	else {
		
		for (int i = 0; i < len; i++) {
			if (str[i] != NULL) {
				for (int j = i + 1; j < len; j++) {

					if (str[i] == str[j]) {
						str[j] = NULL;
						ban--;
					}

				}
			}
		}
		

		
	cout << func(ban) / func(n) << endl;

	}
	
}

int func(int x) {
	int n=1;
	for (int i = 1; i <= x; i++) {
		n *= i;
	}
	return n;
}
