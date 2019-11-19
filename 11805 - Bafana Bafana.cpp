#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n,k,p;
        cin>>n>>k>>p;
        int temp = k+p;
        while(temp>n){
            temp = temp - n;
        }
        cout<<"Case "<<++cnt<<": "<<temp<<endl;
    }
    return 0;
    
}
