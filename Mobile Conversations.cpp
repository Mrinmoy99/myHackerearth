#include <iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
bool pairCompare(const std::pair<int, int>& firstElem, const std::pair<int,int>& secondElem) {
    if(firstElem.second>0 && secondElem.second>0){
        return firstElem.first< secondElem.first;
    }
    if(firstElem.second>0 && secondElem.second<=0){
        return 1;
    }
    if(firstElem.second<=0 && secondElem.second>0){
        return 0;
    }
   if(firstElem.second==0 && secondElem.second<=0){
      return 1;
   }
   if(firstElem.second<=0 && secondElem.second==0){
      return 0;
   }
    if(firstElem.second<=0 && secondElem.second<=0){
        return firstElem.first+firstElem.second>secondElem.first+secondElem.second;
    }
    return 0;
    
}
int main()
{
   int r;
   cin>>r;
   std::vector<std::pair<int, int> > vec(r);
   int a[r];
   int b[r];
   
   for(int i=0;i<r;i++){
       int tmp1,tmp2;
       
       cin>>tmp1>>tmp2;
       vec[i].first=tmp1;
       vec[i].second=tmp2-vec[i].first;
   }
   sort(vec.begin(), vec.end(), pairCompare);
   for(int i=0;i<r;i++)
   {
       //cout<<vec[i].first<<" "<<vec[i].second<<endl;
   }
   //cout<<endl;
   long long res=0;
   long long c=0;
   for(int i=0;i<r;i++)
   {
       c=c-vec[i].first;
       //cout<<c<<endl;
       if(c<res){
           res=c;
       }
       c=c+vec[i].first+vec[i].second;
       
   }
   cout<<-res;
   return 0;
}