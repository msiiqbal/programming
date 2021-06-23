int m=1000000007;

long long POWER(int a,int b){

    long long ans=1ll;
    while(b){
        if(b&1)
        ans=(ans*a)%m;

        b=b>>1;
        a=(a*a)%m;
    }
    return ans;
}