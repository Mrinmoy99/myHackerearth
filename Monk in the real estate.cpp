#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,l;
    	set<int> s;
    	cin>>n;
    	while(n--)
    	{
    		cin>>l;
    		s.insert(l);
    		cin>>l;
    		s.insert(l);
    	}
    	cout<<s.size()<<'\n';
    }
    
    return 0;
}