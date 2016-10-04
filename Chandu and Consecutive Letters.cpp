#include <iostream>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	string s;
	while(n--)
	{
		cin>>s;
		cout<<s[0];
		int p=0;
		for(int i=0;i<s.length();i++)
			if(s[p]!=s[i])
			{
				cout<<s[i];
				p=i;
			}
		cout<<'\n';
	}
    
    return 0;
}