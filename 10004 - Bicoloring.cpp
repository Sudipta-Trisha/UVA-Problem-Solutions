#include<bits/stdc++.h>
using namespace std;
const int nax = 300;

void bfs(int node, int source)
{
    vector<vector<int> >graph(node+10,vector<int>());
    int edge;
    cin>>edge;
    for(int i=0; i<edge; i++){
            int u,v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
    }
    queue<int>q;
    q.push(source);
    vector<int>arr(node+10,-1);
    arr[source] = 0;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        int y = arr[x];

        for(int i=0; i<graph[x].size(); i++){
                if(arr[graph[x][i]]==y)
                {
                    cout<<"NOT BICOLORABLE."<<endl;
                    return ;
                }
                if(arr[graph[x][i]]==-1){
                        q.push(graph[x][i]);
                }
                if(y==0) arr[graph[x][i]]=1;
                else arr[graph[x][i]]=0;
        }
    }
    cout<<"BICOLORABLE."<<endl;
    return ;
}

int main()
{
    int node,edge;
    while(cin>>node){
        if(node==0){
            break;}
        bfs(node,0);

    }
    return 0;
}
