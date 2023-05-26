#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>> mat, int start){
    vector<bool> visited(mat.size(),false);
    vector<int> queue;
    queue.push_back(start);
    visited[start] = true;
    int val;
    while(!queue.empty()) {
        val = queue[0];
        cout << val << " ";
        for(int i = 0; i < mat.size(); i++) {
            if(mat[val][i] == 1 && visited[i] != true) {
                queue.push_back(i);
                visited[i] = true;
            }
        }
        queue.erase(queue.begin());
    }
}

int main() {
    vector<vector<int>> mat = {
        {0, 1, 0, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 1, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {1, 1, 0, 1, 0}
    };
    bfs(mat, 0);
    return 0;
}
