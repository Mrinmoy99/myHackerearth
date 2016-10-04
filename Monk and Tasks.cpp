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
    	vector<vector<int> >  m(65,vector<int>());
    	for(int i=0;i<n;i++)
    	{
    		cin>>k;
    		m[__builtin_popcount(k)].push_back(k);
    	}
    	for(int i=0;i<64;i++)
    	{
    		for(int p : m[i])
    			cout<<p<<" ";
    	}
    	cout<<"\n";
    }
    
    return 0;
}