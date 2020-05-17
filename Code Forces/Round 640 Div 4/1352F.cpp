#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
using namespace std;

string solve(ll n0,ll n1,ll n2)
{
    string ans;
    if(n1==0)
    {
        if(n0==0)
        {
            for(int i=0;i<=n2;i++)
            {
                ans.pb('1');
            }
            return ans;
        }
        else{
            for(int i=0;i<=n0;i++)
            {
                ans.pb('0');
            }
            return ans;
        }
    }
    for(int i=0;i<=n1;i++)
    {
        if(!(i&1))ans.pb('1');
        else ans.pb('0');
    }
    ans.insert(1,string(n0,'0'));
    ans.insert(0,string(n2,'1'));
    return ans;
}

int main()
{
    ll t,x; x=0;
    cin>>t;
    
    while(t--)
    {
        ll n0,n1,n2; cin>>n0>>n1>>n2;
        cout<<solve(n0,n1,n2)<<"\n";
    }
}