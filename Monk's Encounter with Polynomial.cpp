 #include <iostream>
    using namespace std;
     
    int main()
    {
        int n;
        long long int a,b,c, k;
        cin>>n;
        while(n--)
        {
        	cin>>a>>b>>c>>k;
        	long long int  x1=0,x2=100000,f,x=-1,ans=-1;
        	while(x1<=x2){
        		x=(x1+x2)/2;
        		
        		f=a*(x*x)+b*x+c;
        		if(f>=k)
        		{
        			x2=x-1;
        			ans=x;
        		}	
        		else 
        			x1=x+1;
        	}
        	cout<<ans<<'\n';
        }
        return 0;
    }