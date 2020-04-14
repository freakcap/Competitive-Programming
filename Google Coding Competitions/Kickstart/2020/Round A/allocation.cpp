#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    ll b;
    ll n;
    int x=1;
    while(t--)
    {
        cin>>n>>b;
        vector<int>arr(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int i=0;
        int cnt=0;
        while(b>0)
        {
            if(b-arr[i]>=0)
            {
                b-=arr[i];
                cnt++;
                i++;
                if(i==n) break;
            }
            else break;
        }
        cout<<"Case #"<<x<<": "<<cnt<<"\n";
        x++;
    }
}