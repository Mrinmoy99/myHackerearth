#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long a[100000],b[100000];
int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		int	p=0;
		for(int i=0;i<n;i++)
		{
			int l=0,h=n-1,mid,pos=-1;
			while(l<=h)
			{
				mid = (l+h)/2;
				if(b[mid] >= a[i])
				{
					pos=mid;
					l=mid+1;
				}
				else
					h=mid-1;
			}
			p=max(p,pos-i);
		}
		cout<<p<<'\n';
	}
    
    return 0;
}