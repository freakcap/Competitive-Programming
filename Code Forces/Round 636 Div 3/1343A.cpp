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
		for(ll i=2;;i++)
		{
			ll tmp = (1<<i) - 1;
			if(n%tmp==0)
			{
				cout<<(ll)(n/tmp)<<"\n";
				break;
			}
		}
	}
	return 0;
}