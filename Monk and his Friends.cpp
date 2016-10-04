#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
   		int n,m;
   		
   		long long k;
   		scanf("%d %d",&n,&m);
   		set<long long> mp;
   		for(int i=0;i<n;i++)
   		{
   			scanf("%lld",&k);
   			mp.insert(k);
   		}
   		for(int i=0;i<m;i++)
   		{
   				scanf("%lld",&k);
   			if(mp.find(k)!=mp.end())
   			{
   				cout<<"YES\n";
   			}
   			else
   			{
   					mp.insert(k);
   						cout<<"NO\n";
   			}
   			
   		}
   }
    return 0;
}