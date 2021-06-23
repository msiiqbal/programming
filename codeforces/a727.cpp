#include<iostream>
#include<cmath>
#include<vector>
#include <vector>
#include<algorithm>

using namespace std;

#define ll long long
#define fo(i,n)   for(i=0;i<n;i++)
#define fol(i,a,b) for(int i=a;i<b;i++)
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl

#define vi vector<int>
#define vll vector<ll>

#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
//-------------------------------------------------------------


void testcase(){
	long long n,x,t,temp,ans=0ll;
	scanf("%lld %lld %lld",&n,&x,&t);
	temp=t/x;
	ans=(n-temp)*(temp) + (temp*(temp-1))/2 ;
	printf("%lld\n",ans);
}


int main(){
//--------------------------------------
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);
 
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
//----------------------------------------------
	int n,q;
	string s;
	scanf("%d %d",&n,&q);
	cin>>s;
	vector<int> v(n+1);
	v[0]=0;
	for(int i=0;i<n;i++){
		v[i+1]=v[i]+s[i]-'a'+1;
	}

	while(q--){
		int l,r,ans=0;
		scanf("%d %d",&l,&r);
		ans=v[r]-v[l-1];

	printf("%d\n",ans);
	}

}