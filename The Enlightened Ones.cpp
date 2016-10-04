#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int a[100000];
int n,k;
bool check(int d,int k)
{
	int prev=a[0]+d;
	k--;
	for(int i=1;i<n;i++)
	{
		if(prev+d>=a[i])
			continue;
		if(k==0)
			return false;
		prev=d+a[i];
		k--;
	}
	return true;
}
int main()
{
	
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
	int l=1,h=100000000,mid,pos;
	while(l<=h)
	{
		mid=(l+h)/2;
	//	cout<<l<<" "<<h<<"\n";
		bool a=check(mid,k);
		bool b=check(mid-1,k);
	//		cout<<a<<" "<<b<<"\n";
		if(a && !b)
			break;
		if(!a)	
		{
			pos=mid;
			l=mid+1;
		}
		else
			h=mid-1;
		
	}
    cout <<mid<< endl;
    return 0;
}