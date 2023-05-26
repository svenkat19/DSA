#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> mat,vector<int> &visited, int start){
visited[start]=true;
cout<<start;
for(int i=0;i<mat[start].size();i++)
{
    if(!visited[i])
    {
        dfs(mat,visited,i);
    }
}
}

int main(){
    vector<vector<int>> mat = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0}
    };
    vector<int> vis(mat[0].size(),false);
    dfs(mat,vis,0);
}