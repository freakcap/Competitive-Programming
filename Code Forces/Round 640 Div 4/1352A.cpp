#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int k = log10(n);
        int cnt=0;
        vector<int>ans;
        while(n>=0 && k>=0)
        {

            int tmp=floor(n/pow(10,k))*pow(10,k);
            if(tmp!=0)
            {
                cnt++;
                ans.push_back(tmp);
                // cout<<tmp<<" ";
            }
            n=n%(int)pow(10,k);
            k--;
        } 
        cout<<cnt<<"\n";
        for(int x : ans) cout<<x<<" ";  
        cout<<"\n";
    }

}