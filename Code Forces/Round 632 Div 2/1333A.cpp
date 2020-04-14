#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        if(n%2!=0 && m%2!=0)
        {
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(cnt%2==0) cout<<"B";
                    else cout<<"W";
                    cnt++;
                }
                cout<<"\n";
            }
        }
        else{
            int cnt=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if((i==0 && j<1))
                    {
                        cout<<"B";
                        continue;
                    }
                    if(i==1 && j<1)
                    {
                        cout<<"B";
                        cnt=1;
                        continue;
                    }
                    if(cnt%2==0) cout<<"B";
                    else cout<<"W";
                    cnt++;
                }
                cout<<"\n";
            }
        }
    }
}