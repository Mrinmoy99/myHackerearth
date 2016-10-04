#include<iostream>
using namespace std;
 
   
 
int main()
{
	int n=60,k=30;
	 long long C[n+1][k+1];
   	 for (int i = 0; i <= n; i++)
    	{
       		 for (int j = 0; j <= min(i, k); j++)
        	{
            		if (j == 0 || j == i)
                		C[i][j] = 1;
            		else
                		C[i][j] = C[i-1][j-1] + C[i-1][j];
        	}
    	}
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int N;
		cin>>N;
		cout<<C[2*N][N]/(N+1)<<endl;
	}
	return 0;
}