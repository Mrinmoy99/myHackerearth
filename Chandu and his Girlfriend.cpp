#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    int t,n;
    int a[100000];
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    	sort(a,a+n,greater<int>());
    	for(int i=0;i<n;i++)
    		cout<<a[i]<<" ";
    	cout<<'\n';
    }
    return 0;
}