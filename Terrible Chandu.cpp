#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
    	cin>>s;
    	reverse(s.begin(),s.end());
    	cout<<s<<'\n';
    	
    }
    return 0;
}