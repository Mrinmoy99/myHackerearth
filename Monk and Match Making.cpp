#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	
	char ch[100001];
	scanf("%s",&ch);
	string s(ch);
    int t;
    cin>>t;
    int a,b,c,d;
    int p[100001]={0};
    for(int i=0;i<100000;i++)
    {
    	p[i+1]=p[i]+s[i]-'a';
    }
    while(t--)
    {
    	cin>>a>>b>>c>>d;
    	a--;c--;
    	int l = p[b]-p[a];
    	int m = p[d]-p[c];
    	//s.substr(a,b-a).compare(s.substr(c,d-c))==0
    	if(l==m && s[a]==s[c])
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
    	
    }
    
    
    return 0;
}