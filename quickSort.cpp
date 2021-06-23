#include<iostream>
using namespace std;

void swapAll(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partationArray(int a[],int lowerBound,int upperBound){

    int start=lowerBound,end=upperBound,pivot=a[lowerBound];
    while(start<end){

        while(pivot>=a[start])
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end)
            swapAll(&a[start],&a[end]);

    }
    swapAll(&a[lowerBound],&a[end]);

    return end;
}
 
int partationArray2(int a[],int lowerBound,int upperBound){
    int pivot=a[upperBound],i=lowerBound-1;
    for(int j=lowerBound;j<upperBound;j++){
        if(a[j]<pivot){
            i++;
            swapAll(&a[i],&a[j]);
        }
    }
    swapAll(&a[i+1],&a[upperBound]);
    return i+1;
}

void quickSort(int a[],int lowerBound,int upperBound){
    if(lowerBound<upperBound){
        int pivot=partationArray(a,lowerBound,upperBound);
        quickSort(a,lowerBound,pivot-1);
        quickSort(a,pivot+1,upperBound);
    }
}
void printArray(int a[],int start,int end){

    for(int i=start;i<end;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{

int a[]={3,6,1,67,93245,9,435,78};
// subsetArray(a,sizeof(a)/sizeof(int));
// insertionSort(a,sizeof(a)/sizeof(int));
// bubbleSort(a,sizeof(a)/sizeof(int));
// selectionSort(a,sizeof(a)/sizeof(int));
quickSort(a,0,sizeof(a)/sizeof(int)-1);
printArray(a,0,sizeof(a)/sizeof(int));
return 0;
}