#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

string s;
cin>>s;
sort(s.begin(),s.end());
int low=lower_bound(s.begin(),s.end(),*(s.end()-1))-s.begin();
string p(s.begin()+low,s.end());
cout<<p;
}