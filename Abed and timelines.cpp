#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
		int M,N;
		cin>>M>>N;
		int x1,y1,x2,y2,p;
		cin>>x1>>y1;
		cin>>x2>>y2;
		cin>>p;
		int h=min(abs(x2-x1),M-abs(x2-x1));
		int v=min(abs(y2-y1),N-abs(y2-y1));
		int cost=(h+v)*p;
		cout<<cost<<endl;
		if(cost<1000)
			cout<<"You saved the group."<<endl;
		else
			cout<<"Let go of the group."<<endl;
	}
	return 0;
}