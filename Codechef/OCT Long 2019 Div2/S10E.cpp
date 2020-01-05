#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,n,cnt,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cnt=0;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            a.push_back(k);
        }
        
        for(int i=0;i<n;i++)
        {
            if(i>=5)
            {
                if(a[i]<a[i-1] && a[i]<a[i-2] && a[i]<a[i-3] && a[i]<a[i-4] && a[i]<a[i-5] )
                {
                    cnt++;
                }
            }
            else if(i==0)
            {
                cnt++;
            }
            else{
                int flag=1;
                for(int j=0;j<i;j++)
                {
                    if(!(a[i]<a[j]))
                    {
                        flag=0;
                    }
                }
                if(flag==1)
                {
                    cnt++;
                }
            }
        }
        
        cout<<cnt<<endl;
    }
}