#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define F first
#define S second
using namespace std;

int main()
{
	ll t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		vi arr(n);
		for(int i=0;i<n;i++) cin>>arr[i];
		ll cnt=0;
		for(int i=0;i<n;i++)
		{
			ll start=0,end=0;
			ll curr=arr[0];
			while(end<arr.size() && start<arr.size())
			{
				if(start==end && curr==arr[i])
				{
					start++;
					end=start;
					curr=arr[start];
				}
				else if(curr==arr[i])
				{
					cnt++;
					break;
				}
				else if(curr>arr[i])
				{
					curr-=arr[start++];
				}
				else{
					curr+=arr[++end];
				}
			}
		}
		cout<<cnt<<"\n";
	}
}