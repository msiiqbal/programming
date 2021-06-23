void subsetArray(int a[],int n){
    for(int i=0;i<(1<<n);i++){
        for(int j=1;j<n;j++){
            if(i&(1<<j)){
                printf("%d ",a[j]);
            }
        }
    }
}