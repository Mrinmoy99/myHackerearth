#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int c[100000];
int fre[1000001];
int merge(int a[],int l,int mid,int h,int b[])
{
	int i=l,j=mid,k=l,c=0;
	while(i<mid && j<=h)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			fre[a[i]]+=c;
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			c++;
			j++;
			k++;
		}
	}
	while(i<mid )
	{
			b[k]=a[i];
			fre[a[i]]+=c;
			i++;
			k++;
	}
	while(j<=h)
	{
 
			b[k]=a[j];
		
			j++;
			k++;
	}
	for(int i=l;i<=h;i++)
		a[i]=b[i];
		
}
void merge_sort(int a[],int l,int h,int b[])
{
 
	if(l<h)
	{	int mid=(l+h)/2;
		
		merge_sort(a,l,mid,b);
		merge_sort(a,mid+1,h,b);
		merge(a,l,mid+1,h,b);
	}
	
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
			memset(fre,0,sizeof(fre));
		for(int i=0;i<n;i++)
		{	cin>>a[i];c[i]=a[i];}
		merge_sort(a,0,n-1,b);
		for(int i=0;i<n;i++)
			cout<<fre[c[i]]<<" ";
		cout<<"\n";	
	}
    
    return 0;
}