#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int pair = n*m;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                int k=1;
               
                while(i+k<n && j+k<m && i-k>=0 && j-k>=0)
                {
                    if(a[i][j+k]==a[i][j-k] && a[i+k][j]==a[i-k][j])
                    {
                        k++;
                        pair++;   
                    }
                    else{
                        break;
                    }
                }
            }
        }
        // cout<<"---"<<c<<col[0][0]<<col[0][1]<<col[0][2]<<endl;
        // cout<<"---"<<r<<row[0][0]<<row[0][1]<<row[0][2]<<endl;
         cout<<pair<<"\n";
    }
    return 0;
}
