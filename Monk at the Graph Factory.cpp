#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int s=0,k;
    for(int i=0;i<t;i++)
    {
    	cin>>k;
    	s+=k;
    }
    if(s/2==t-1)
    	cout<<"Yes";
    else
    	cout<<"No";
    
    return 0;
}