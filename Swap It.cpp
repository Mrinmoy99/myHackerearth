#include <iostream>
using namespace std;
 
int main()
{
    int T,n,l;
    cin>>T;
    for(int t=0;t<T;t++ )
    {
    	cin>>n>>l;
    	int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	for(int i=0;i<n;i++)
    	{
    		int pos=i;
    		for(int j=i+1;j<n;j++)
			{
				if(j-i>l)
					break;
				if(a[pos]>=a[j])
					pos=j;
			}
			if(i!=pos)
			{
				for(int k=pos;k>i;k--)
					swap(a[k],a[k-1]);
				l-=(pos-i);
			}		   		    		
    	}
    	for(int i=0;i<n;i++)
    		cout<<a[i]<<" ";
    	cout<<"\n";
    }
    return 0;
}