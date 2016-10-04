#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<string> st;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			st.insert(s);
		}
		for(set<string>::iterator it=st.begin();it!=st.end();it++)
			cout<<*it<<'\n';
	}
    return 0;
}