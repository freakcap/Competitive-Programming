#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define endl "\n"
using namespace std;
ll n,k; vi arr;
// vector<bool> visited; 
void solve(string s)
{
    int dp[n]={0};
    bool flag=true,flag1=false;
    int xx=0;
   for(int i=0;i<n;i++)
   {    if(s[i]=='0' && !flag1) xx++;
      if(s[i]=='1') flag1=true;
       if(s[i]=='0' && flag1)
       {
           ll jmp=i-xx;
           if(jmp<=k)k-=jmp;
           else jmp=k,k=0;
           char tmp=s[i];
            s[i]=s[i-jmp];
            s[i-jmp]=tmp;
            xx=i-jmp+1;
            if(k==0)
            {
                break;
            }
       }
   }
   cout<<s<<endl;
}

int main()
{
    ll t,x; x=0;
    cin>>t;
    
    while(t--)
    {
        // arr.clear();
        cin>>n>>k;
        // visited.clear();
        // for(int i=0;i<n;i++) visited.pb(false);
        string s; cin>>s;
        solve(s);
    }
}