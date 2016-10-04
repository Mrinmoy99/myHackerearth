#include <iostream>
#include<vector>
using namespace std;
 
 
 
int main()
{
    vector<bool> isprime(1001,false);
    vector<int> prime;
    for(int i=2;i<1001;i++)
    {
    	if(!isprime[i])
    	{
    		prime.push_back(i);
    		//cout<<i<<"  ";
    		for(int j=i+i;j<1001;j+=i)
    			isprime[j]=true;
    	}   	
    }
    int n;
    cin>>n;
    if(n==1||n==0)
    	cout<<"0\n";
    else if(n==2)
    	cout<<"1\n";
    else 
    {
    	long long p=1,res=1;
    	
    	for(int i=3;i<=n;i++)
    	{	if(!isprime[i])
    		{
    		p*=2;
    		}
    		res+=p;
    		
    	}	
    	cout<<res<<"\n";
    }
    	
    return 0;
}