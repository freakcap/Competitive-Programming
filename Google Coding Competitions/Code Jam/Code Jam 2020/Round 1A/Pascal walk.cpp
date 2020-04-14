#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    return a.length()<b.length();
    }
int main()
{
    int t; cin>>t;
    int x=0;
    
    while(t--)
    {
        int n; cin>>n;
        bool flag=false;
        int row=0;
        int power=0,sum=0;
        
        for(int i=0;i<n;i++)
        {
            if((1<<i)>n)
            {
                row=i-1;
                sum= (1<<(i-1))-1;
                break;
            }
        }
       
        
        
        x++;
        cout<<"Case #"<<x<<": \n";
        if(n==1) {
            cout<<1<<" "<<1<<"\n";
            continue;
        }
       
         bool f= true;
        int last;
        for(int i=1;i<=row;i++)
        {
            if(f)
            for(int j=1;j<=i;j++)
            {
                cout<<i<<" "<<j<<"\n";
                f=false;
                last=0;
            }
            else
             for(int j=i;j>=1;j--)
            {
                cout<<i<<" "<<j<<"\n";
                f=true;
                last=1;
            }
        }
        int cnt=n-sum;
        int i=row+1;
        int j;
        if(last==1) j=1;
        else j=row+1;
        while(cnt>0)
        {
            cout<<i<<" "<<j<<"\n";
            if(last!=1) j++;
            i++;
            cnt--;
        }
        // cout<<"\n";
    }
}