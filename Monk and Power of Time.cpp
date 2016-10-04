#include <iostream>
#include<queue>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n;
    queue<int> q;
    int a[n];
    for(int i=0;i<n;i++)
    {	cin>>k;
    	q.push(k);
    }
    for(int i=0;i<n;i++)
    {	cin>>a[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {	
    	while(a[i]!=q.front())
    	{
    		k=q.front();
    		q.pop();
    		q.push(k);
    		ans++;
    	}
    	q.pop();
    	ans++;
    }
    cout<<ans;
    return 0;
}