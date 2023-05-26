#include<bits/stdc++.h>
using namespace std;
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
       set<pair<int,int>> st;
       vector<int> dist(V,1e9);
       dist[S]=0;
       st.insert({0,S});
       while(!st.empty())
       {
        auto it=*(st.begin());
        int node=it.second;
        int dis=it.first;
        st.erase(it);
        for(auto x:adj[node] )
        {
            int nodeW=x[0];
            int edgW=x[1];
            if(dis+edgW<dist[nodeW])
                {
                    dist[nodeW]=dis+edgW;
                    st.insert({dist[nodeW],nodeW});
                }
        }
       }
    return dist;
    }
int main()
{
    int V = 3, E = 3;
    
    vector <vector<int>> adj[]={
        {{1, 1}, {2, 6}}, 
        {{2, 3}, {0, 1}}, 
        {{1, 3}, {0, 6}
        
        }};

        vector <int> res= dijkstra(V,adj,0);
    for(auto x:res)
        cout<<x<<" ";
}


