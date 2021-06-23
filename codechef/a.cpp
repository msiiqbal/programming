#include <bits/stdc++.h>
//#define ll long long
#define get getchar
inline int scan()
{
    int n=0,s=1;
    char p=get();
    if(p=='-')  s=-1;
    while((p<'0'||p>'9')&&p!=EOF&&p!='-') p=get();
    if(p=='-') s=-1,p=get();
    while(p>='0'&&p<='9') { n = (n<< 3) + (n<< 1) + (p - '0'); p=get(); }
    return n*s;
}
using namespace std;
int main(){
    string s,chef="FEHC";
    cin>>s;
    
    int n=s.length(),position=0,ans=0,check=0;
    while(n--){
        if(s[n]==chef[position]){
            position++;
        }
        if(position==4){
            ans++;
            position=0;
        }

    }
    printf("%d",ans);
  return 0;
}