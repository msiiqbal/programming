#include<bits/stdc++.h>
using namespace std;

void printSpace(int n){
    for(int i=0;i<n;i++){
        printf(" ");
    }
}


int main()
{
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);
 
freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
      int t,n;
    scanf("%d",&t);
    for(int i =1;i<=t;i++){
        scanf("%d",&n);
        printf("Case #%d:\n",i);
        int inddent=n/2-1,space=1;
        for(int i=1;i<=n;i++){
            if(i==1 || i==n){
                printSpace(n/2);
                printf("*");
            }
            else{
                printSpace(inddent);
                printf("*");
                printSpace(space);
                printf("*");
                if(i>(n/2)){
                    inddent++;
                    space-=2;
                }
                else{
                    inddent--;
                    space+=2;   
                }
   
            }
        printf("\n");    
        }
    }
    return 0;
}