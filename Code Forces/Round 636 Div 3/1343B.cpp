#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		if((n/2)%2!=0)
		{
			cout<<"NO"<<"\n";
			continue;
		}
		ll off = (n/2)*(n/2 + 1)-(n/2 -1)*(n/2 -1);
		if(off%2==0)
		{
			cout<<"NO"<<"\n";
			continue;
		}
		vector<ll>ans;
		for(ll i=2;i<=n;i=i+2)
		{
			ans.pb(i);
		}
		int tmp=1;
		for(ll i=0;i<(n/2)-1;i++)
		{
			ans.pb(tmp);
			tmp+=2;
		}
		ans.pb(off);
		cout<<"YES\n";
		for(int x=0;x<ans.size();x++)cout<<ans[x]<<" ";
		cout<<"\n";
	}
	return 0;
}