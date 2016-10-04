#include <bits/stdc++.h>
using namespace std;
int visited[1000];
int start;
vector<vector<int> > adj;
int dfs(int n)
{
	if(visited[n]==start) return 0;
	visited[n]=start;
	int c=1;
	for(int i=0;i<adj[n].size();i++)
	{
			c+=dfs(adj[n][i]);
	}
	return c;
}
int main()
{
    int t;
    cin>>t;
    adj.resize(t,vector<int>());
    int d,l,k;
    cin>>d;
    while(d--)
    {
    	cin>>l>>k;
    	l--;k--;
    	adj[l].push_back(k);
    }
    int ans= INT_MAX;
    for(int i=0;i<t;i++)
    {
    	start++;
    	ans=min(ans,dfs(i));
    }
    cout<<ans;
    return 0;
}