/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 17, 2020 11:06 AM
 *    Problem Name  : 10685 - Nature
 *    Problem Limit : 3000 ms , 32 MB
 *    Problem Url   : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=18&page=show_problem&problem=1626
**/

#include<bits/stdc++.h>
using namespace std;

map<string,int>p;
int parent[5005],sz[5005];

void makeset(int n)
{
    for(int i=0; i<n; i++){
        parent[i] = i;
        sz[i] = 1;
    }
}

int find_par(int f)
{
    if(f == parent[f])
        return f;
    return parent[f] = find_par(parent[f]);
}

void join(int a, int b)
{
    int x = find_par(a);
    int y = find_par(b);

    if(x!=y){
        parent[y] = x;
        sz[x] += sz[y];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int n,m;
    while(cin >> n >> m){
        if(n ==0 && m == 0){
            break;
        }
    
        makeset(n);

        string s,sec,third;
        for(int i=0; i<n; i++){
            cin >> s;
            p[s] = i;
        }

        for(int i=0; i<m; i++){
            cin >> sec >> third;

            int a = p[sec];
            int b = p[third];

            join(a,b);
        }

        int maxx = *max_element(sz,sz+n);
        
        cout << maxx << endl;
        p.clear();
    }

    return 0 ;
}
