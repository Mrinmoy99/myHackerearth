#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n;
    	vector<int> a(10,0);
    	for(int i=0;i<n;i++)
    	{
    		cin>>k;
    		a[k%10]++;
    	}
    	int ans =0;
    	for(int i=0;i<10;i++)
    	{
    		if(a[i])
    		ans +=a[i]-1;
    	}
    	cout<<ans<<'\n';
    }
    
    return 0;
}