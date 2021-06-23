void merge(int a[],int n,int b[],int m){
	int start_a=0,start_b=0;
	while(start_a<n && start_b<m){
		if(a[start_a]>=b[start_b])
			cout<<(b[start_b++])
		else(])
			cout<<(a[start_a++])
	}
	while(start_a<n ){

			cout<<(a[start_a++])<<" ";
	}
	while( start_b<m){
			cout<<(b[start_b++])<<" ";
	}

}