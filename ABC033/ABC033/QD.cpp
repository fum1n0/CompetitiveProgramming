
#include<iostream>
#include<vector>

using namespace std;

int main() {

	int num,sum,tmp;
	int nine = 0, eight = 0;
	
	cin >> num;
	sum = num*(num - 1)*(num - 2) / 6;

	vector<vector<int>> point;
	vector<int>rad;
	
	point = vector<vector<int>>(num, vector<int>(2));
	
	for (int i = 0; i < num; i++) {
		cin >> point[i][0];
		cin >> point[i][1];
	}
		
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			for (int k = j+1; k < num; k++) {

				if (i != j && i != k && j != k) {

					tmp = ((point[j][0] - point[i][0])*(point[k][0] - point[i][0])) +
						((point[j][1] - point[i][1])*(point[k][1] - point[i][1]));

					if(tmp<=0)
					rad.push_back(tmp); 

				}
			}
		}
	}
	
	
	for (int i = 0; i < rad.size(); i++){	
		
		if (rad[i] == 0) {
			nine++;
		}
		else if(rad[i]<0) {
			eight++;
		}
	
	}

	cout << sum - (nine + eight) << " " << nine << " " << eight << endl;
	cin >> num;

	return 0;
}
