#include <iostream>
#include <vector>
#include <algorithm>

int main(){
vector<int>v;
v.push_back(10);
v.push_back(290);
v.push_back(88);
v.push_back(3);
v.push_back(6);
sort(v.begin(),v.end());
for(int i = 0;i < v.size(); ++i)
{
  cout<<v[i]<<" ";
}

}