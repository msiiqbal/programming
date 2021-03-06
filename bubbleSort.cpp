void swapAll(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

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