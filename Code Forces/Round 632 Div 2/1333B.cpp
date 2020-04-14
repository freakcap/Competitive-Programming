#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n],val[n];
        bool flag=false;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>val[i];

        int cntmin1=0;
        int cntzero=0;
        int cnt1=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]==val[i])
                continue;
            if(arr[i]<val[i])
            {
                if(cnt1==0)
                {
                    flag=true;
                    break;
                }
            }
            if(arr[i]>val[i])
            {
                if(cntmin1==0)
                {
                    flag=true;
                    break;
                }
            }
            if(arr[i]==0) cntzero++;
            if(arr[i]==-1) cntmin1++;
            if(arr[i]==1) cnt1++;
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}