#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
 
   int main()
{
    int q,c,n;
    stack<int> s;
    cin>>q;
    while(q--)
    {
    	cin>>c;
    	switch(c)
    	{
    		case 1: if(s.empty())
    					cout<<"No Food\n";
    				else
    				{
    					cout<<s.top()<<'\n';
    					s.pop();
    				}	
    				break;
    		case 2: cin>>n;
    				s.push(n);
    				break;
    	}
    }
    return 0;
}