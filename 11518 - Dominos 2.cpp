#include<bits/stdc++.h>
#define MAX 100010
using namespace std;

vector<int> vec[MAX];
bool visited[MAX];
int  cont=0;

void dfs(int node)
{
    cont++;
    visited[node] = true;
    int size = vec[node].size();
    for(int i=0; i<size; i++)
    {
        if(!visited[vec[node][i]]) 
            dfs(vec[node][i]);
    }
}

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n,m,l;
        cin>>n>>m>>l;
        int x,y,z;
        for(int i=0; i<m; i++){
            cin>>x>>y;
            vec[x].push_back(y);
        }
        while(l--){
            cin>>z;
            if(!visited[z]) dfs(z);
        }
        
        cout<<cont<<endl;
        for(int i=0; i<=n; i++){
            vec[i].clear();
            cont=0;
            visited[i] = false;
        }
    }
    return 0;
}
