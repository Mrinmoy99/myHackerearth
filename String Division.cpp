#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
    	string s;
    	cin>>s;
    	if(s.size()>=10)
    		cout<<"YES\n";
    	else
    	{
    		bool f=false;
    		for(int i=1;i<s.size();i++)
    		{
    			for(int j=i+1;j<s.size();j++)
    			{
    				for(int k=j+1;k<s.size();k++)
    				{
    					string s1=s.substr(0,i);
    					string s2=s.substr(i,j-i);
    					string s3=s.substr(j,k-j);
    					string s4=s.substr(k,s.size()-k);
    					if(s1!=s2 && s1!=s3 && s1!=s4 && s2!=s3 && s2!=s4 && s3!=s4)
    					{
    						f=true;
    						break;
    					}
    				}
    			}
    		}
    		if(f)
    			cout<<"YES\n";
    		else
    			cout<<"NO\n";
    	}
    }
    return 0;
}