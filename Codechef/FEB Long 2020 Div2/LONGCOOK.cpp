#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
#define pb push_back
using namespace std;

bool leap(ll year)
{ 
    
    if (year % 400 == 0)  
        return true;  
  
    if (year % 100 == 0)  
        return false;  
  
    if (year % 4 == 0)  
        return true;  
    return false;  
  
}

ll dayofweek(ll d, ll m, ll y)  
{  
    static ll t[] = { 0, 3, 2, 5, 0, 3, 
                       5, 1, 4, 6, 2, 4 };  
    y -= m < 3;  
    return ( y + y / 4 - y / 100 +  
             y / 400 + t[m - 1] + d) % 7;  
}  

int main()
{
    ll t,y1,m1,y2,m2;
    cin>>t;
    while(t--)
    {
        cin>>m1>>y1;
        cin>>m2>>y2;
     
        if(m1>2) y1+=1;
        if(m2<2) y2-=1;
        
        ll cnt(0);
        ll tmp=(y2-y1)%400;
        
        if(y2-y1>=400)
        {
            for(int i=y1;i<=y1+tmp;i++)
            {
                if(dayofweek(1,2,i)==6)
                    cnt++;
                else if(dayofweek(1,2,i)==0 && !leap(i))
                    cnt++;
            }
            cout<<cnt+101*((y2-y1)/400)<<"\n";
        }
        else{
            for(int i=y1;i<=y2;i++)
            {
                if(dayofweek(1,2,i)==6)
                    cnt++;
                else if(dayofweek(1,2,i)==0 && !leap(i))
                    cnt++;
            }
            cout<<cnt<<"\n";
        }
    }
}