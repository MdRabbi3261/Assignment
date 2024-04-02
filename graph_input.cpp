#include<bits/stdc++.h>
using namespace std;
void displayinput(vector<vector<pair<int,int>>>&v)
{
  //cout<<"source"<<" "<<"destination"<<" "<<"weight"<<endl;
  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v[i].size();j++)
    {
      cout<<"s "<<" d "<<" w "<<endl;
       cout<<i<<"  "<<v[i][j].first<<"  "<<v[i][j].second<<endl;
    }
  }
}
int main()
{
  int node,edge;
  cin>>node>>edge;
  vector<vector<pair<int,int>>>v(node);
  for(int i=0;i<edge;i++)
  {
    int s,d,w;
    cin>>s>>d>>w;
    v[s].push_back({d,w});
    v[d].push_back({s,w});
  }
  displayinput(v);

}