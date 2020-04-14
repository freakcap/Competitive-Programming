#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        int cnt=0;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1) cnt++;
        }
        if(n<=6)
        {
            if(cnt>1) cout<<"NO\n";
            else cout<<"YES\n";
            
            continue;
        }
        cnt=0; bool flag = false; bool flg=true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                if(flag)cnt++;
            }
            else{
                if(cnt<5 && flag) 
                {   
                    cout<<"NO\n";
                    flg=false;
                    break;
                }
                else{
                    flag=true;
                    cnt=0;
                }
            }
        }
        if(flg) cout<<"YES\n";
    }
    return 0;
}