#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
    	string p,t;
    	getline(cin,p);
    	getline(cin,t);
    	int lp=p.length();
    	int lt=t.length();
    	int fp[26]={0},ft[26]={0};
    	for(int i=0;i<lp;i++)
    		fp[p[i]-'a']++;
    	for(int i=0;i<lp;i++)
    		ft[t[i]-'a']++;
    	bool m;	
    	for(int i=lp;i<=lt;i++)
    	{
    		m=true;
    		for(int j=0;j<26;j++)
    			if(fp[j]!=ft[j])
    			{
    				m=false;
    				break;
    			}
    		if(m)
    			break;
    		ft[t[i-lp]-'a']--;
    		ft[t[i]-'a']++;
    	}
    	if(!m)
    		cout<<"NO\n";
    	else
    		cout<<"YES\n";
    }
    return 0;
}