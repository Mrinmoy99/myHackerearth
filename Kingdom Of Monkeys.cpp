#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adj;
vector<long long> a;
vector<bool> visited;
long long dfs(int n)
{
	long long c=a[n];
	visited[n]=true;
	for(int i=0;i<adj[n].size();i++)
		if(!visited[adj[n][i]])
			c+=dfs(adj[n][i]);
	return c;
}
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m;
    	cin>>n>>m;
    	int l,k;
    	adj.clear();
    	adj.resize(n,vector<int>());
    	a.clear();
    	a.resize(n,0LL);
    	visited.clear();
    	visited.resize(n,false);
    	
    	for(int i=0;i<m;i++)
    	{
    		cin>>l>>k;
    		l--;k--;
    		adj[l].push_back(k);
    		adj[k].push_back(l);
    	}	
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    		
    	long long ans=0;
    	for(int i=0;i<n;i++)
    	if(!visited[i])
    		ans = max(ans,dfs(i));
    	cout<<ans<<'\n';	
    }
    return 0;
}