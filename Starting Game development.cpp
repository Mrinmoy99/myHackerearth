#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
 
int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    int s[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    		cin>>s[i][j];
    }
    for(int i=0;i<q;i++)
    {
    	int p[n];
    	for(int j=0;j<n;j++)
    		cin>>p[j];
    	int c=INT_MAX;	
    	for(int j=0;j<n;j++)
    	{
    	
    		int b=upper_bound(s[j],s[j]+m,p[j])-s[j];
    		c=min(c,b);	
    	}
    	cout<<c<<"\n";
    }
    return 0;
}