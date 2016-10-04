#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	long long num,ans=0;
    	priority_queue<long long> pq;
    	for(int i=0;i<n;i++)
    	{
    		cin>>num;
    		pq.push(num);
    	}
    	for(int i=0;i<k;i++)
    	{
    		num=pq.top();
    		pq.pop();
    		ans+=num;
    		pq.push(num/2);
    	}
    	cout<<ans<<'\n';
    }
    return 0;
}