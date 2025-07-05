#include<bits/stdc++.h>
using namespace std;
void solution()
{
   int n;cin>>n;
   int v[5]={1,5,10,20,100};
   int res=0;
   for(int i=4;i>=0;i--)
   {
       res=res+n/v[i];
       n=n%v[i];
   }
   cout<< res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();

    return 0;
}
