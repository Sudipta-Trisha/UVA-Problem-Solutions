#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(false);
    string s,t;
    while(getline(cin,s)){
        getline(cin,t);
        int len1 = s.length();
        int len2 = t.length();

        vector<vector<int> >dp(len1+1,vector<int>(len2+1));

        for(int i=0; i<len1; i++){
            for(int j=0; j<len2; j++){
                int a = i+1, b = j+1;
                if(s[i]==t[j])
                    dp[a][b] = dp[a-1][b-1] + 1;
                else{
                    dp[a][b] = max(dp[a][b-1],dp[a-1][b]);
               }
           }
       }
      
       int i=len1, j=len2;
       while(i>0 && j>0){
            int val = dp[i][j];
            if(val==dp[i][j-1]) j--;
            else if(val==dp[i-1][j]) i--;
            else {
                i--,j--;
            }
       }

       cout<<dp[len1][len2]<<endl;
     }
     return 0;
}
