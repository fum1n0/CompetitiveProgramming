
/*
#include"iostream"
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
#include <string>

using namespace std;


int main(){


int sum1=0,sum2=0,sum3=-9999,sum4=0,sum5=-9999,
result=0,N,i,j,k=0,l,max_point=0;

cin >> N;

vector<int> A(N, 0);

for (i = 0; i < N; i++){
cin >> A[i];
}




for (i = 0; i < N; i++){
sum2 = 0, sum3 = 0,sum4=0;

for (j = 0; j < N; j++){
sum1 = 0;
k = 1;
if (j > i){
for (l = i; l <= j; l++){

if (k % 2 == 0){
sum1 += A[l];
}
k++;
}

}else{
for (l = j; l <= i; l++){

if (k % 2 == 0){
sum1 += A[l];
}
k++;
}
}

sum2 = sum1;
if (sum2 > sum3){
sum3 = sum2;
max_point = j;
}
}



k = 1;
if (max_point > i){
for (l = i; l <= max_point; l++){

if (k % 2 == 1){
sum4 += A[l];
}
k++;

}

}else{

for (l = max_point; l <=i; l++){

if (k % 2 == 1){
sum4 += A[l];
}
k++;

}
}

if (sum4 > sum5){
sum5 = sum4;
}

}


cout << sum5 << "\n";

return 0;

}

*/