#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    long long l,m;
    cin>>t;
    while(t--)
    {
    	cin>>l>>m;
    	cout<<__builtin_popcountll(l^m)<<'\n';
    }
    
    return 0;
}