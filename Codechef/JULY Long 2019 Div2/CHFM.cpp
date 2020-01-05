#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,ind,n1;
    double omean,sum,n;
    
    cin>>t;
    
    while(t--)
    {
        ind=-1;
        cin>>n;
        n1=n;
        
        int a[n1],b[n1];
        
        for(int i=0;i<n1;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i;j<n-1;j++)
        //     {
        //         if(a[i]>a[j])
        //         {
        //             int tmp;
        //             tmp=a[i];
        //             a[i]=a[j];
        //             a[j]=a[i];
        //         }
        //     }
        // }
        
        sort(a,a+n1);
        sum=0;
        
        for(int i=0;i<n1;i++)
        {
            sum=sum+a[i];
        }
        
        omean=(double)(sum/n);
        
        for(int i=0;i<n1;i++)
        {
            if(omean==(double)((sum-a[i])/(n-1)))
            {
                ind=i;
                break;
            }
        }
        
        if(ind==-1)
        {
            cout<<"Impossible\n";
        }
        else{
            for(int i=0;i<n1;i++)
            {
                if(b[i]==a[ind])
                {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
    
    return 0;
}