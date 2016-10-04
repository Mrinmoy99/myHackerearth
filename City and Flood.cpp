#include <bits/stdc++.h>
using namespace std;
int a[100000];
int root(int p)
{
	while(a[p]!=p)
	{
		a[p]=a[a[p]];
		p=a[p];
	}
	return p;
}
bool find(int p,int q)
{
	return root(p)==root(q);
}
 
void union_set(int p, int q)
{
	a[root(q)]=a[root(p)];
}
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    	a[i]=i;
    int n,l,m;
    cin>>n;
    while(n--)
    {
    	cin>>l>>m;
    	l--;
    	m--;
    	union_set(l,m);
    }
    set<int> s;
    for(int i=0;i<t;i++)
    {
    
    	s.insert(root(i));
    }
    cout<<s.size();
    return 0;
}