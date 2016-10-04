#include <iostream>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);
    long long n,m=s.length();
    cin>>n;
    for(long long i=0;i<n;i++)
    {
    	long long a,b;
    	cin>>a>>b;
    	a--;
    	b--;
    	if(s[a%m ]==s[b%m ])
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";
    	
    }
    return 0;
}