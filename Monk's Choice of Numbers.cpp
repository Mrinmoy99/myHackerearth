#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,l,ans=0;
    	cin>>n>>k;
    	vector<int> s;
    	for(int i=0;i<n;i++)
    	{
    		cin>>l;
    		s.push_back(__builtin_popcount(l));
    	}
    	sort(s.begin(),s.end(),greater<int>());
    	for(int i=0;i<k;i++)
    	{
    		ans+=s[i];
    	}
    	cout<<ans<<"\n";
    }
    r