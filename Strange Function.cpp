#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c;
    cin>>n>>c;
    int a[n];
    long long s=0;
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
    	int id=i-(n-i-1);
    	if(id>0)
    		a[i]+=c;
    	else
    		a[i]-=c;
    	s+=1LL*id*a[i];	
    }
    cout<<s;
    return 0;
}