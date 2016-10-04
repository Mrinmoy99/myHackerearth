#include <iostream>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int m,n;
    	cin>>m>>n;
    	int a[m],b[n];
    	for(int i=0;i<m;i++)
    		cin>>a[i];
    	for(int i=0;i<n;i++)
    		cin>>b[i];	
    	int i=0,j=0;
    	while(i<m && j<n)
    	{
    		if(a[i]>=b[j])
    			cout<<a[i++]<<" ";
    		else
    			cout<<b[j++]<<" ";
    	}
    	while(i<m)
    			cout<<a[i++]<<" ";
    	while( j<n)
    			cout<<b[j++]<<" ";
    	cout<<"\n";		
    }
    return 0;
}