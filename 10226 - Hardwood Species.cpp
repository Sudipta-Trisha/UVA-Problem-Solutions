#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int t,cnt;
    char ch;
    scanf("%d%c",&t,&ch);
    getchar();
    while(t--){
        cnt=0;
        string name;
        while(getline(cin,name)){
            if(name.compare("")==0){
                break;
            }
            mp[name]++;
            cnt++;
        }
        for(map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++){
            double ans = ((double)it->second/cnt)*100.0;
            cout<<it->first<<" "<<fixed<<setprecision(4)<<ans<<endl;
        }
        mp.clear();
        if(t!=0) cout<<endl;
    }

    return 0;
}
