
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>

#define rep(i,n,m) for(double i=n;i<(double)(m);i++)

using namespace std;

int main() {

	double p,x,time,prev_time;
	
	cin >> p;
	x = 0;

	time = p;
	prev_time = p + 1;

	while (prev_time>time) {
		prev_time = time;
		x += 0.000001;

		time = x + ( p / pow(2, (x / 1.5)));
		
	}
		

	printf("%10.10lf \n", prev_time);
	cin >> p;

	return 0;
}



//QA
//
//double l, x;
//double y, s;
//double d;
//double dis;
//
//double time = 0, tmp;
//
//
//cin >> l >> x >> y >> s >> d;
//
//
//if (s < d) {
//
//	dis = d - s;
//
//	time = dis / (x + y);
//
//	if (y - x>0) {
//		dis = s + (l - d);
//		tmp = dis / fabs((y - x));
//	}
//	else if (y - x < 0) {
//		tmp = dis / fabs((y - x));
//	}
//
//	if (x - y != 0)time = min(time, tmp);
//
//}
//else {
//	dis = d + (l - s);
//	time = dis / (x + y);
//
//	if (y - x > 0) {
//		dis = s - d;
//		tmp = dis / fabs((y - x));
//	}
//	else if (y - x < 0) {
//		tmp = dis / fabs((y - x));
//	}
//
//
//
//	if (x - y != 0)time = min(time, tmp);
//
//}
//
//if (s == d)time = 0;
//
//
//
//printf("%10.10lf \n", time);


