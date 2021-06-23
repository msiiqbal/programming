#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v;

int sizeOfArray;

// void getAllElements(vector<int> v,int a[]){
// for(int j:v){
// 	for(int i=0;i<sizeOfArray;i++){
// 		if(j&(1<<i)){
// 			printf("%d ",a[i]);
// 		}
// 	}
// 	printf("\n");
// }
// }

// void swap_(int *x,int *y){
// 	int temp=*x;
// 	*x=*y;
// 	*y=temp;
// }

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		sizeOfArray=n;
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);

		}
		sort(a,a+n);
		vector<vector<int>> v((1<<n)-1);

for(int i=1;i<(1<<n);i++){
	for(int j=0;j<n;j++){
		if(i&(1<<j)){
			v[i-1].push_back(a[j]);
		}
	}
}

sort(v.begin()+1, v.end());


for (vector<int> i:v)
{
	for(int j:i){
		printf("%d ",j);
	}
	printf("\n");
}
}
return 0;
}