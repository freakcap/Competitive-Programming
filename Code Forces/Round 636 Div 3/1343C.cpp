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
		vector<ll>arr(n);
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		ll sum=0;
		int i=0;
		while(i<n)
		{
			if(arr[i]>0)
			{
				ll max=0;
				while(arr[i]>0)
				{
					if(arr[i]>max)
					{
						max=arr[i];
					}
					i++;
					if(i==n) break;
				}
				sum+=max;
			}
			else{
				ll max=-1e9-1;
				while(arr[i]<0)
				{
					if(arr[i]>max)
					{
						max=arr[i];
					}
					i++;
					if(i==n) break;
				}
				sum+=max;
			}
		}
		cout<<sum<<"\n";
	}
	return 0;
}