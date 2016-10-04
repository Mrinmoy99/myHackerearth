#include <iostream>
#include<algorithm>
using namespace std;
vector<int> a(100000);
int main()
{
    int n,q,k;
    
    cin>>n>>q;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<q;i++)
    {	cin>>k;
    	if(binary_search(a.begin(),a.end(),k))
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }		
    return 0;
}