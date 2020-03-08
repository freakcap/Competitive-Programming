#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
using namespace std;

int main()
{
  ll t,n,p;
  cin>>t;
  while(t--)
  {
      cin>>n>>p;
      vi a;
      for(int i=0;i<n;i++)
      {
          ll x;
          cin>>x;
          a.pb(x);
      }
      vi b(n,0);
      int flg=1;
      for(int i=n-1;i>=0;i--)
      {
          if(a[i]>p)
          {
              b[i]=1;
              flg=0;
              break;
          }
          ll tmp = p/a[i];
          if(tmp==0)
          {
              b[i]=1;
              flg=0;
              break;
          }
          else if(tmp*a[i]<p)
          {
              if((tmp+1)*a[i]>p)
              {
                b[i]=tmp+1;
                flg=0;
                break;
              }
              else{
              b[i]=tmp;
              p-=tmp*a[i];
              }
          }
          else if(tmp*a[i]==p)
          {
              b[i]=tmp-1;
              p-=(tmp-1)*a[i];
          }
      }
      
      if(flg==1)
      {
          cout<<"NO\n";
          continue;
      }
      cout<<"YES ";
      for(auto x: b)
      {
          cout<<x<<" ";
      }
      cout<<"\n";
  }
}