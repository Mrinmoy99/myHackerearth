#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long a,b;
    string s;
    long long ans=0;
    cin>>a>>b;
    cin>>s;
    a=a%b;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]=='1')
    	{
    		ans+=a;
    		ans=ans%b;
    	}
    	a=a*a;
    		a=a%b;
    }
    cout<<ans;
    return 0;
}