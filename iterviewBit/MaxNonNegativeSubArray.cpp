#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void getSollution(vector<int> v){

	int n=v.size(),start=0,end=0,maxSum=0,sum=0;

	for(int i=0;i<n;i++){

		if(v[i]>=0){
			sum=sum+v[i];
		}

		else{
			maxSum=max(maxSum,sum);
		}
	}


}


int main(){

	vector<int> v;


}