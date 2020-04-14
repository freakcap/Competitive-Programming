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
        int n,m,k; cin>>n>>m>>k;
        int arr[n][k];
        for(int i=0;i<n;i++)
            for(int j=0;j<k;j++) cin>>arr[i][j];
        
        vi a;
        for(int i=0;i<n;i++)
        {
            int x[m+1]={0};
            int tmp=-1,id=0;
            for(int j=0;j<k;j++) x[arr[i][j]]++;
            
            for(int q=0;q<=m;q++)
            {
                if(x[q]>tmp) 
                {
                    tmp=x[q];
                    id=q;
                }
            }
            a.pb(id);
        }
        for(int x1: a) cout<<x1<<" ";
        cout<<"\n";
    }
    return 0;
}