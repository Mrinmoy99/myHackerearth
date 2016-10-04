#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	vector<bool> isprime(10001,true);
	isprime[0]=isprime[1]=false;
	for(int i=2;i<10001;i++)
	{
		if(isprime[i])
		{
			for(int j=i+i;j*j<10001;j+=i)
				isprime[j]=false;
		}
	}
	vector<int> prime;
	for(int i=2;i<10001;i++)
	{
		if(isprime[i])
		{
			prime.push_back(i);
		}
	}
    int n,x,p;
    cin>>n;
    while(n--)
    {
    	cin>>x;
    	int c=1;p=x;
    	for(int i=0;prime[i]*prime[i]<=p;i++)
    		if(x%prime[i]==0)
    		{
    			int t=0;
    			while(x%prime[i]==0)
    			{	
    				c++;
    				x=x/prime[i];
    			}	
    			c*=(1+t);
    		}
    	if(x>1)
    	{
    		c*=2;
    	}
    	if(c>=4)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
    
    return 0;
}