#include <bits/stdc++.h>
// #include<math.h>
// #include<set>
using namespace std;

// int countSetBits(int n) 
// { 
//     if (n == 0) 
//         return 0; 
//     else
//           return (n & 1) + countSetBits(n >> 1); 
// } 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //to speed up i/o
    
    int t,n;
    int k,q;
    cin>>t;
    while(t--)
    {
        set<int>even;
        set<int>odd;
        cin>>n;
        if(n<=100000 && n>=1)
        
        for(int i=0;i<n;i++)
        {
            cin>>k;
            if(k<=100000 && even.size()+odd.size()<=100000 && k>=1){
            if(__builtin_popcount(k)%2==0)
                even.insert(k);
                else odd.insert(k);
            
             set<int>::iterator it = even.begin();
                 while (it != even.end())
            {
                q=*it^k;
                 if(__builtin_popcount(q)%2==0 && q!=0)
                even.insert(q);
                else if(q!=0) odd.insert(q);
            	it++;
            }
                it = odd.begin();
                 while (it != odd.end())
             {
                q=*it^k;
                 if(__builtin_popcount(q)%2==0 && q!=0)
                even.insert(q);
                else if(q!=0)odd.insert(q);
            	it++;
             }}
             cout<<even.size()<<" "<<odd.size()<<"\n";
        }
        else  cout<<even.size()<<" "<<odd.size()<<"\n";
    }
    
}