#include<bits/stdc++.h>
#define ll long long 
#define vi vector<int>
#define pb push_back
#define F first
#define S second
using namespace std;

int main()
{
    int t;  int k,x;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        cin>>k>>x;
        int arr[26]={0};
        for(char q:s)
        {
            arr[q-'a']++;
            if(arr[q-'a']>x)
            {
                arr[q-'a']--;
                if(k==0)
                break;
                else k--;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
            sum+=arr[i];
        }
        // if(k>0)
        // {
        //     sum+=k;
        // }
        cout<<sum<<endl;
        
    }
    return 0;
}