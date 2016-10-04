#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<utility>
using namespace std;
bool sortfun(pair<int,int> p,pair<int,int> q) 
{
	return p.second<q.second;
}
int main()
{
	int N;
	cin>>N;
	vector<pair<int,int> > timelist;
	for(int i=0;i<N;i++)
	{
		int h1,m1,h2,m2;
		scanf("%d:%d-%d:%d",&h1,&m1,&h2,&m2);
//		cout<<h1<<" "<<m1<<" "<<h2<<" "<<m2<<endl;
		timelist.emplace_back(h1*60+m1,h2*60+m2);
	}
	sort(timelist.begin(),timelist.end(),sortfun);
	bool flag=true;
	for(int i=0;i<timelist.size()-1;i++)
	{
		if(timelist[i].second >timelist[i+1].first)
		flag=false;	
	}
	if(!flag)
		cout<<"Will need a moderator!";
	else
		cout<<"Who needs a moderator?";
	return 0;
}