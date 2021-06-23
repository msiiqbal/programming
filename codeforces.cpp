#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
scanf("%d",&t);
while(t--){
    int n,l,r;
    scanf("%d %d %d",&n,&l,&r);

    vector<int> a(n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

    }
    sort(a.begin(),a.end());
    long long ans=0;
    
    for(int i=0;i<n;i++){
        int temp;
        temp=upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();
        temp-=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
        ans+=temp;
    
    }
    
    printf("%lld\n",ans);
}
return 0;
}