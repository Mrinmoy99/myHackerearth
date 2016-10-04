#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
	cin>>n;
    vector<pair<int,string> > rec(n);
    string s;int m;
    for(int i=0;i<n;i++)
    {
    	cin>>s>>m;
    	rec[i]=make_pair(-m,s);
    }
    sort(rec.begin(),rec.end());
    for(int i=0;i<n;i++)
    {
    	cout<<rec[i].second<<' '<<(-1* (rec[i].first))<<'\n';
    }
    return 0;
}