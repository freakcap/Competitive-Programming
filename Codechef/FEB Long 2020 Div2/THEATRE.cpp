#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll total=0;
    
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[4][4]={0};
        ll max=-9999999999;
        for(ll i=0;i<n;i++)
        {
            char a;
            cin>>a;
            ll ind1 = a-'A';
            ll ind2;
            cin>>ind2;
            arr[ind1][ind2/3 - 1]++;
        }
        
       
           vi c(4,0) ;
       for(int i=0;i<4;i++)
       {
            
             c[0]=arr[i][0];
           for(int j=0;j<4;j++)
           {
               if(j==i) continue;
                 c[1]=arr[j][1];
               for(int k=0;k<4;k++)
               {
                   if(k==j || k==i) continue;
                     c[2]=arr[k][2];
                   for(int l=0;l<4;l++)
                   {
                        if(l==i || l==j || l==k)
                            continue;
                         c[3]=arr[l][3];
                        
                        vi tmp1=c;
                        sort(tmp1.rbegin(),tmp1.rend());
                        ll cost=100;
                        ll tot=0;
                        // cout<<"**";
                        for(auto x:tmp1)
                        {
                            // cout<<x;
                            if(x==0)
                                tot-=100;
                            else{
                                tot+=cost*x;
                                cost-=25;
                            }
                            
                        }
                        
                        if(tot>max)
                        {
                            max=tot;
                        }
                        tmp1.clear();
                        c[3]=0;
                    
                   }
                    c[2]=0;
               }
                c[1]=0;
           }
            c[0]=0;
       }
       
       cout<<max<<"\n";
       total+=max;
        
    }
    
    cout<<total<<"\n";

    return 0;
}