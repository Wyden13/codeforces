#include<bits/stdc++.h>
using namespace std;
void solution();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    solution();
    return 0;
}
bool isBG(char a,char b)
{
    return (a=='B' && b=='G');
}
void solution()
{
    int n,t;
    cin>>n>>t;
    char arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    while(t--)
    {
        for(int i=1;i<n;i++)
        {
            if(isBG(arr[i-1],arr[i])==true)
            {
                swap(arr[i-1],arr[i]);
                i++;
            }
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i];
}
