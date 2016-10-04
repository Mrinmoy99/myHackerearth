#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin>>A[i];
	int gc=A[0];
	for(int i=1;i<n;i++)
	{
		gc=__gcd(gc,A[i]);
	}
	long long prod=1,ans=1,b=1000000007;
	for(int i=0;i<n;i++)
	{
		prod=(prod*A[i])%b;
	}
	while(gc>=1)
	{
		if(gc&1)
		{
			ans=(ans*prod)%b;
		}
		prod=(prod*prod)%b;
		gc>>=1;
	}
    cout <<ans<<"\n";
    return 0;
}