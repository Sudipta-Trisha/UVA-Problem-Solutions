/*Sudipta Banik Trisha */

#include<bits/stdc++.h>
using namespace std;
#define sz 105
int case_cnt=0;

void apsp()
{
    int u, v;
    
    int dis[sz][sz];
        
    while(cin >> u >> v){
        int sum=0, cnt=0;
        double avg;
        
        if(u == 0 && v == 0)
            break;
    
        for(int i=0; i<sz; i++){
            for(int j=0; j<sz; j++){
                if ( i == j) dis[i][j] = 0;
                else dis[i][j] = 1000000;
            }
        }
        
        dis[u-1][v-1] = 1;
        
        while(cin >> u >> v ){
            if ( u == 0 && v == 0)
                break;
            dis[u-1][v-1] = 1;
        }
        
        for(int k=0; k<sz; k++){
            for(int j=0; j<sz; j++){
                for(int i=0; i<sz; i++){
                    if(dis[j][i] > dis[j][k] + dis[k][i]){
                        dis[j][i] = dis[j][k] + dis[k][i];
                    }
                }
            }
        }
        
        for(int i=0; i<sz; i++){
            for(int j=0; j<sz; j++){
                if( dis[i][j] == 1000000 || i == j)  
                    continue;
                sum = sum + dis[i][j];
                cnt++;
            }
        }
        
        avg = sum * 1.0 / cnt;
        cout << "Case "<< ++case_cnt <<": average length between pages = "<< setprecision(3) << fixed << avg << " clicks" << endl;
    }
}

int main()
{
    apsp();
    
    return 0;
}
