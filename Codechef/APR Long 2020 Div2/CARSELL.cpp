#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

const ll M = 1000000007;

bool compare(ll a,ll b)
{
    return a>b;
}
        
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n,compare);
        ll profit=0;
        for(ll i=0;i<n;i++)
        {
            ll x = i;
            if(arr[i]-x <0) x=arr[i];
            profit+=(arr[i]-x);
        }
        profit%=M;
        cout<<profit<<"\n";
    }
    return 0;
}