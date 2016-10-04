#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {cin>>a[i];
    s+=a[i];}
    bool m[s+1][s+1];
    memset(m,0,sizeof(m));
    m[0][0]=1;
 // cout<<s<<endl;
    int mx=100000001;
    int p[3];
    for(int i=0;i<n;i++)
    	for(int j=s;j>=0;j--)
 {   		for(int k=s;k>=a[i];k--)
    		{
    			m[j][k]|=m[j][k-a[i]];
    			m[k][j]|=m[k-a[i]][j];
    			if((m[j][k]||m[k][j]) && s-j-k>0&& j>0 && k>0)
    			{
    			p[0]=j;p[1]=k;p[2]=s-j-k;
    			  //cout<<s-j-k<<"  "<<j<<"  "<<k<<endl;
    				sort(p,p+3);
    			
    				mx=min(mx,p[2]);
    			//	 cout<<p[0]<<"  "<<p[1]<<" "<<p[2]<<" "<<mx<<endl;	
    			}
    			
    		}
    
}
 
   // cout<<p[0]<<"  "<<p[1]<<" "<<p[2];	
    cout<<mx<<endl;
    return 0;
}