#include<bits/stdc++.h>
using namespace std;

// Swap Function
template<class T>
void swapAll(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// all sibsets of array
void subsetArray(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=1;j<n;j++){
            if(i&(1<<j)){
                printf("%d ",a[j]);
            }
        }
    }
}

// insertion sort
void insertionSort(int a[], int n)
{
    for (int i = 1; i<n; i++)
    {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp){

            a[j + 1] = a[j];
            j--;
        }
        
        a[j + 1] = temp;
    }
}

// Array print function
void printArray(int a[],int start,int end){

    for(int i=start;i<end;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

// Bubble sort
void bubbleSort(int a[],int n){

    for(int i=0;i<n-1;i++){
        bool swapped=true;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swapAll(&a[j],&a[j+1]);
                swapped=false;
            }
        }
        if(swapped)
            return;
    }
}

// selection sort
void selectionSort(int a[],int n){

    for(int i=0;i<n-1;i++){

        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index])
                min_index=j;
        }
        swapAll(&a[i],&a[min_index]);
    }
}

// array partation for Quick sort
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

// Quick sort
void quickSort(int a[],int lowerBound,int upperBound){
    if(lowerBound<upperBound){
        int pivot=partationArray(a,lowerBound,upperBound);
        quickSort(a,lowerBound,pivot-1);
        quickSort(a,pivot+1,upperBound);
    }
}

//  merge function for merge sort
void merge(int a[],int start ,int end,int mid){
    
    int tempArray[end-start+1];
    int i=start,j=mid+1,k=0;
    while(i<=mid && j<=end){
        if(a[i]>a[j]){
            tempArray[k++]=a[j];
            j++;
        }
        else{
            tempArray[k++]=a[i];
            i++;
        }
    }

    while(i<=mid){
        tempArray[k++]=a[i++];
    }
    while(j<=end){
        tempArray[k++]=a[j++];
    }

    for(int i=start; i<=end;i++){
        a[i]=tempArray[i-start];
    }

}

// Merge sort
void mergeSort(int a[],int start,int end){
    if(start<end){
        int mid=(start + (end-start)/2);
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,end,mid);
    }
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