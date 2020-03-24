#include<bits/stdc++.h>
#define ll long long
#define F first
#define S second
using namespace std;

ll t,n,k,ans;

void solve()
{
    ans=1;
    ll sum = k*k;
    if(n<sum || (n-sum) % 2 !=0)
    {
        ans = 0;
    }
    
    if(ans == 0) cout<<"NO\n";
    else cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        solve();
    }

    return 0;
}