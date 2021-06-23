#include<iostream>
#include<math.h>
#include<climits>
using namespace std;


int kadanesMAxSumSubarray(int a[],int n){

	int maxCurrentSum=INT_MIN,maxSum=INT_MIN;

	for(int i=0;i<n;i++){

		maxCurrentSum=max(a[i],maxCurrentSum+a[i]);

		maxSum=max(maxSum,maxCurrentSum);

	}

	return maxSum;
}


int main(){

	int a[]={1, 2, 5, -7, 2, 3};
	cout<<kadanesMAxSumSubarray(a,6);
}