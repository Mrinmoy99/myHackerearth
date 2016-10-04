#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int res=1E9;
    for(int l=1;l<2*k;l++)
    {
    	res=min(res , abs(k-l) + min(n%l , l- n%l));
    }
    cout<<res;
    return 0;
}