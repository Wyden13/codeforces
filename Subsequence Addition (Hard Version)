#include<bits/stdc++.h>
using namespace std;
typedef long long ll
void solution()
{
    long long int n;cin>>n;
    vector<long long int>v(n);

    for(long long int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(v[0]!=1)
    {
        cout<<"NO\n";
        return;
    }
    long long int m=1;
    for(long long int i=1;i<n;i++)
    {
        if(v[i]<=m)
        {
            m+=v[i];
            continue;
        }else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
        solution();
    return 0;
}
