#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int t,n;
	cin>>t;
	long long x;
	while(t--)
	{
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];	
		long long x1=0;
		int l=0,r=0;
		while(r<n && l<n)
		{			
			while(x1>x)
			{	x1-=a[l];
				l++;
			}
			if(x==x1)
				break;			
			x1+=a[r];
			r++;
		}
		while(x1>x)
			{	x1-=a[l];
				l++;
			}
		if(x1==x)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
 
    return 0;
}