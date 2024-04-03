#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int source;
    int destination;
    int weight;
};
bool cmp(Edge&a,Edge&b)
{
    return a.weight<b.weight;
}
void displayinput(vector<Edge>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].source<<" "<<v[i].destination<<" "<<v[i].weight<<endl;
    }
}
int main()
{
    int node,edge;
    cin>>node>>edge;
    vector<Edge>v(edge);
    for(int i=0;i<edge;i++)
    {
        int s,d,w;
        cin>>s>>d>>w;
        v[i].source=s;
        v[i].destination=d;
        v[i].weight=w;
    }
    sort(v.begin(),v.end(),cmp);
    displayinput(v);
}