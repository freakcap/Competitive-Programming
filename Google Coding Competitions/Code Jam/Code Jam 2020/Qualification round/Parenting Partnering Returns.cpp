#include<bits/stdc++.h>
using namespace std;

class interval{

public:
	int start;
	int end;
	int index;
	char alloc;

	void setInterval(int i,int a,int b)
	{
		index=i;
		start=a;
		end=b;
		alloc='N';
	}

};


int main()
{
	int t,x(0); cin>>t;
	while(t--)
	{
		int n; cin>>n;
		bool flag = false;
		interval a[n];
		for(int i=0;i<n;i++)
		{
			int s,e; cin>>s>>e;
			a[i].setInterval(i,s,e);
		}

		sort(a, a+n,[](interval const & a, interval const & b) -> bool
        { return a.start < b.start; });

        int Cend=0;
        int Jend=0;

        for(int i=0;i<n;i++)
        {
        	if(Cend<=a[i].start)
        	{
        		a[i].alloc = 'C';
        		Cend = a[i].end;
        	}
        	else if(Jend<=a[i].start)
        	{
        		a[i].alloc = 'J';
        		Jend = a[i].end;
        	}
        	else{
        		flag=true;
        		break;
        	}
		}

		sort(a, a+n,[](interval const & a, interval const & b) -> bool
        { return a.index < b.index; });

		x++;
		cout<<"Case #"<<x<<": ";
		if(flag) cout<<"IMPOSSIBLE";
		else for(int i=0;i<n;i++) cout<<a[i].alloc;
		cout<<"\n";
	}
	return 0;
}