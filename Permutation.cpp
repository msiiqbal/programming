#include<iostream>
using namespace std;

void print(int a[]){
    printf("print = ");
    for(int i=0;i<3;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void permutation(int a[],int b[],bool used[],int ind){
    if(ind ==3){
        print(a);
    }
    for(int i=1;i<=3;i++){
        if(used[i]==false){
            used[i]=true;
            a[ind]=b[i-1];
            permutation(a,b,used,ind+1);
            used[i]=false;
        }
    }
}

void permuationCall(int arr[],int n){
    bool used[n+1]={false};
    int a[n];
    copy(arr,arr+n,a);
    permutation(a,arr,used,0);  
}
int main()
{
int array[]={4,5,6};
permuationCall(array,3);

return 0;
}