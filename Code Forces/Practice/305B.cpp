/* 
You are given two rational numbers, one is represented as and the other one is represented as a finite fraction of height n. Check if they are equal.
Input

The first line contains two space-separated integers p, q (1 ≤ q ≤ p ≤ 1018) — the numerator and the denominator of the first fraction.

The second line contains integer n (1 ≤ n ≤ 90) — the height of the second fraction. The third line contains n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1018) — the continued fraction.

Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is preferred to use the cin, cout streams or the %I64d specifier.
Output

Print "YES" if these fractions are equal and "NO" otherwise.
*/

#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main()
{
	ull p,q;
	vector<ull> sol;
	cin>>p>>q;
	while(q>1)
	{
		 sol.push_back(p/q);
		 ull tmp = q;
		 q = p%q;
		 p = tmp;
	}
	if(q!=0)
	sol.push_back(p);
	ull n;
	cin>>n;
	
	if( sol.size() == n || n - sol.size() == 1)
	{
		ull int tmp;
		if(sol.size() == n)
		{
			for(int i=0; i< n ; i++)
			{
				cin>>tmp;
				if(tmp!=sol[i])
				{
					cout<<"NO";
					return 0;
				}
			}
			cout<<"YES";
			return 0;
		}
		else
		{
			for(int i=0 ; i< n-2; i++)
			{
				cin>>tmp;
				if(tmp!=sol[i])
				{
					cout<<"NO";
					return 0;
				}
			}
			cin>>tmp;
			if(tmp+1 != sol[n-2])
			{
				cout<<"NO";
				return 0;				
			}
			cin>>tmp;
			if(tmp!=1)
			{
				cout<<"NO";
				return 0;
			}
			cout<<"YES";
			return 0;
		}
	}
	else
		cout<<"NO"<<endl;
	
	return 0;
}