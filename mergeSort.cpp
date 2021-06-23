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


void mergeSort(int a[],int start,int end){
    if(start<end){
        int mid=(start + (end-start)/2);
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,end,mid);
    }
}
