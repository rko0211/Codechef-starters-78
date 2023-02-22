#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    reverse(a,a+n);
    int ans = a[0];
    for(int i=0;i<x;i++)
    {
        ans= min(ans,a[i]);
    }
    cout<<ans-1<<endl;
}

    return 0;
}