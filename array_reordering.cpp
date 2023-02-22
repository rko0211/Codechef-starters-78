#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int>od;
 vector<int>ev;
 int a[n];
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       ev.push_back(a[i]);
       else
       od.push_back(a[i]);
    }
    
    sort(ev.begin(),ev.end(),greater<int>());
    for(auto it:od)
    {
        ev.push_back(it);
    }
    int count=0;
for(int i=0;i<ev.size();i++)
{
    for(int j=i+1;j<ev.size();j++)
    {
        if(__gcd(ev[i],2*ev[j])>1)
        count++;
    }
}
cout<<count<<endl;
}
    return 0;
}