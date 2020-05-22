#include<bits/stdc++.h>
#define ll long long 
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define endl "\n"
using namespace std;
ll n; vi arr;
vector<bool> visited; 
void solve()
{
    ll k=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==k)
       {
           for(int j=i-1;j>=0;j--)
           {
               if(visited[j]==true || arr[j]<arr[j+1]) {
                   break;
               }
            //    cout<<"swap-"<<arr[j]<<arr[j+1]<<endl;
               ll tmp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tmp;
               visited[j]=true;
               
           }
           if(k<n)
           {
               i=0;k++;
           }
       }
   }

   for(int q: arr) cout<<q<<" ";
   cout<<endl;
}

int main()
{
    ll t,x; x=0;
    cin>>t;
    
    while(t--)
    {
        arr.clear();
        cin>>n;
        visited.clear();
        for(int i=0;i<n;i++) visited.pb(false);
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr.pb(x);
        }
        solve();
    }
}