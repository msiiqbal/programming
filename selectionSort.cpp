template<class T>
void swapAll(T *xp, T *yp)
{
    T temp = *xp;
    *xp = *yp;
    *yp = temp;
}
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