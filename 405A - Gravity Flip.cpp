#include<bits/stdc++.h>
using namespace std;
void solution();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solution();
    return 0;
}
void solution()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
