#include<iostream>
#include<vector>
using namespace std;

vector<int> answer(vector<vector<int>> v){

    vector<int> ans;
    int t=0,b=v.size()-1,l=0,r=v[0].size()-1,direction=0;

    while(t<=b && l<=r){
        if(direction==0){
            for(int i=l;i<=r;i++){
                ans.push_back(v[t][i]);
            }
            t++;
        }
        if(direction==1){
            for(int i=t;i<=b;i++){
                ans.push_back(v[i][r]);
            }
            r--;
        }
        if(direction==2){
            for(int i=r;i>=l;i--){
                ans.push_back(v[b][i]);
            }
            b--;
        }
        if(direction==3){
            for(int i=b;i>=t;i--){
                ans.push_back(v[i][l]);
            }
            l++;
        }
        direction = (direction +1)%4;
    }
    return ans;
}

int main()
{
vector<vector<int>> v;

int n,m,k;
scanf("%d %d",&n,&m);
v.resize(n);
for(int i=0;i<n;i++){
    v[i].resize(m);
    for(int j=0;j<m;j++){
        scanf("%d",&v[i][j]);
    }
}
auto ans=answer(v);

    for(int i :ans){
        printf("%d ",i);
    }


return 0;
}