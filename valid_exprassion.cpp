#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
 if((n+1)>=x && x>=(1-n)){ 
  if(x>0)
  {
    int add = x-1;
    int mul = n-add;
    while(add--) cout<<"+";
    while(mul--) cout<<"*";
    cout<<endl;
    return;
  }
  else if(x<0)
  {
    int sub = -(x)+1;
    int mul = n-sub;
    while(sub--) cout<<"-";
    while(mul--) cout<<"*";
    cout<<endl;
    return ;
  }
  else if(x==0)
  {
    int mul = n-1;
    while(mul--) cout<<"*";
    cout<<"-";
    cout<<endl;
    return ;
  }
}
    cout<<"-1"<<endl;
  
}


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}