#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,m,q,a,b,cnt,evenR,oddR;
    cin>>t;
    while(t--)
    {
        unordered_map<ll,ll> row,col;
        cnt=0;
        evenR=0;
        oddR=0;
        cin>>n>>m>>q;
        
        for(ll i=1;i<=n;i++)
        {
            row.insert({i,0});
        }
        for(ll i=1;i<=m;i++)
        {
            col.insert({i,0});
        }
        while(q--)
        {
            cin>>a>>b;
            
                auto itr = row.find(a);
                itr->second = itr->second + 1;
                itr = col.find(b);
                itr->second = itr->second + 1;
        }
        
        for(auto i=row.begin();i!=row.end();++i)
        {
            if(i->second % 2 == 0)
            {
                evenR++;
            }
            else{
                oddR++;
            }
        }
        
        cnt = oddR*m;
        
        for(auto i=col.begin();i!=col.end();++i)
        {
            if(i->second % 2 != 0)
            {
                cnt=cnt+evenR-oddR;   
            }
        }
        
        cout<<cnt<<"\n";
        
        
    }
    
    return 0;
}