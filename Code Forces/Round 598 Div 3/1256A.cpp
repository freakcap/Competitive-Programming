#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define endl "\n"
using namespace std;
ll a,b,n,s; 
void solve()
{
   if(b==s) {
       cout<<"YES"<<endl;
       return;
   }
   else if(a*n+b<s){
       cout<<"NO"<<endl;
       return;
   }
   else{
       a=(s/n <=a )?s/n:a;
       if(a*n==s || a*n+b>=s){
           cout<<"YES"<<endl;
           return;
       }
       else{
           cout<<"NO"<<endl;
           return;
       }
   }
}

int main()
{
    ll t,x; x=0;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>n>>s;
        solve();
    }
}