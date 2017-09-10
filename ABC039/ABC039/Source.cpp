
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(int i=n;i<(int)(m);i++)

using namespace std;



int main() {
	
	int h, w;

	cin >> h >> w;


	vector<vector<char>>pic(h, vector<char>(w));
	vector<vector<char>>ch(h, vector<char>(w));
	vector<vector<char>>res(h, vector<char>(w));

	rep(i, 0, h) {
		rep(j, 0, w) {
			cin >> pic[i][j];
			ch[i][j] = pic[i][j];
		}
	}

	rep(i, 0, h) {
		rep(j, 0, w) {
			

			if (i == 0) {

				if (j == 0) {

					if (pic[i][j + 1] == '.' || pic[i + 1][j] == '.' || pic[i + 1][j + 1] == '.') {
						ch[i][j] = '.';
					}

				}
				else if (j == w - 1) {


					if (pic[i][j-1] == '.' || pic[i + 1][j] == '.' || pic[i + 1][j - 1] == '.') {
						ch[i][j] = '.';
						
					}

				}
				else {

					if (pic[i][j + 1] == '.' || pic[i][j-1] == '.' || pic[i + 1][j - 1] == '.' || pic[i + 1][j + 1] == '.' || pic[i + 1][j] == '.') {
						ch[i][j] = '.';
					}


				}

				

			}
			else if (j == 0) {


				if (i == h - 1) {


					if (pic[i][j + 1] == '.' || pic[i - 1][j] == '.' || pic[i - 1][j + 1] == '.') {
						ch[i][j] = '.';
					}


				}
				else {


					if (pic[i+1][j] == '.' || pic[i-1][j] == '.' || pic[i][j + 1] == '.' || pic[i - 1][j + 1] == '.' || pic[i + 1][j+1] == '.') {
						ch[i][j] = '.';
					}
					
				}



			}
			else if (i == h - 1) {

				if (j == w - 1) {
					if (pic[i][j - 1] == '.' || pic[i - 1][j] == '.' || pic[i - 1][j - 1] == '.') {
						ch[i][j] = '.';
					}
				}
				else {

					if (pic[i][j-1] == '.' || pic[i][j+1] == '.' || pic[i-1][j] == '.' || pic[i - 1][j- 1] == '.' || pic[i - 1][j + 1] == '.') {
						ch[i][j] = '.';
					}


				}


			}
			else if (j == w - 1) {


				if (pic[i+1][j] == '.' || pic[i-1][j] == '.' || pic[i][j-1] == '.' || pic[i - 1][j-1] == '.' || pic[i + 1][j - 1] == '.') {
					ch[i][j] = '.';
				}





			}
			else {

				if (pic[i][j - 1] == '.' || pic[i][j + 1] == '.' || pic[i - 1][j] == '.' || pic[i + 1][j] == '.' || pic[i - 1][j - 1] == '.' || pic[i - 1][j + 1] == '.' || pic[i + 1][j - 1] == '.' || pic[i + 1][j + 1] == '.') {
					ch[i][j] = '.';
				}

				

			}


		}

	}


	rep(i, 0, h) {
		rep(j, 0, w) {
			
			res[i][j] = ch[i][j];
		}
	}


	
	

	rep(i, 0, h) {
		rep(j, 0, w) {


			if (i == 0) {

				if (j == 0) {

					if (ch[i][j + 1] == '#' || ch[i + 1][j] == '#' || ch[i + 1][j + 1] == '#') {
						res[i][j] = '#';
					}

				}
				else if (j == w - 1) {


					if (ch[i][j - 1] == '#' || ch[i + 1][j] == '#' || ch[i + 1][j - 1] == '#') {
						res[i][j] = '#';
					}

				}
				else {

					if (ch[i][j + 1] == '#' || ch[i][j - 1] == '#' || ch[i + 1][j - 1] == '#' || ch[i + 1][j + 1] == '#' || ch[i + 1][j] == '#') {
						res[i][j] = '#';
					}


				}






			}
			else if (j == 0) {


				if (i == h - 1) {


					if (ch[i][j + 1] == '#' || ch[i - 1][j] == '#' || ch[i - 1][j + 1] == '#') {
						res[i][j] = '#';
					}


				}
				else {


					if (ch[i + 1][j] == '#' || ch[i - 1][j] == '#' || ch[i][j + 1] == '#' || ch[i - 1][j + 1] == '#' || ch[i + 1][j + 1] == '#') {
						res[i][j] = '#';
					}
				}



			}
			else if (i == h - 1) {

				if (j == w - 1) {
					if (ch[i][j - 1] == '#' || ch[i - 1][j] == '#' || ch[i - 1][j - 1] == '#') {
						res[i][j] = '#';
					}
				}
				else {

					if (ch[i][j - 1] == '#' || ch[i][j + 1] == '#' || ch[i - 1][j] == '#' || ch[i - 1][j - 1] == '#' || ch[i - 1][j + 1] == '#') {
						res[i][j] = '#';
					}


				}



			}
			else if (j == w - 1) {


				if (ch[i + 1][j] == '#' || ch[i - 1][j] == '#' || ch[i][j - 1] == '#' || ch[i - 1][j - 1] == '#' || ch[i + 1][j - 1] == '#') {
					res[i][j] = '#';
				}





			}
			else {

				if (ch[i][j - 1] == '#' || ch[i][j + 1] == '#' || ch[i - 1][j] == '#' || ch[i + 1][j] == '#' || ch[i - 1][j - 1] == '#' || ch[i - 1][j + 1] == '#' || ch[i + 1][j - 1] == '#' || ch[i + 1][j + 1] == '#') {
					res[i][j] = '#';
				}


			}







		}

	}

	


	int  flag = 0;
	rep(i, 0, h) {
		rep(j, 0, w) {

			if (res[i][j] != pic[i][j]) {
				flag++;
			}
		}
	}


	if (flag != 0) {
		cout << "impossible" << endl;
	}
	else {
		cout << "possible" << endl;

		rep(i, 0, h) {
			rep(j, 0, w) {
				cout << ch[i][j];
			}
			cout << endl;
		}






	}



	return 0;
}








//A


//int a, b, c;
//cin >> a >> b >> c;
//
//cout << a*b * 2 + b*c * 2 + c*a * 2 << endl;


//B

//long long int x, n;
//cin >> x;
//
//n = sqrt(x);
//n = sqrt(n);
//
//cout << n << endl;


//C


//char str;
//
//cin >> str;
//
//if (str == "WBWBWWBWBWBWWBWBWWBW")cout << "Do" << endl;//So	
//if (str == "WBWBWWBWBWWBWBWBWWBW")cout << "So" << endl;//re
//
//
//if (str == "WBWBWBWWBWBWWBWBWBWW")cout << "Fa" << endl;//do
//
//
//if (str == "WBWWBWBWBWWBWBWWBWBW")cout << "Re" << endl;//ra
//if (str == "WBWWBWBWWBWBWBWWBWBW")cout << "La" << endl;//mi
//
//if (str == "WWBWBWWBWBWBWWBWBWWB")cout << "Si" << endl;//fa#
//if (str == "WWBWBWBWWBWBWWBWBWBW")cout << "Mi" << endl;//Si
//
//
//
//if (str == "BWBWWBWBWBWWBWBWWBWB")cout << "Do" << endl;//So# //#
//if (str == "BWWBWBWBWWBWBWWBWBWB")cout << "Re" << endl;//ra# //#
//if (str == "BWBWBWWBWBWWBWBWBWWB")cout << "Fa" << endl;//do#	 //#
//if (str == "BWBWWBWBWWBWBWBWWBWB")cout << "So" << endl;//re#  //#
//if (str == "BWWBWBWWBWBWBWWBWBWW")cout << "La" << endl;//fa  //#






