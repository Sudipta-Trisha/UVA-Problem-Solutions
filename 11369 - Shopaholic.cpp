#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        sort(arr.begin(),arr.end(),greater<int>());
        int total_discount = 0;
        
        for(int i=2; i<n; i+=3){
            total_discount += arr[i];
        }
        
        cout<<total_discount<<endl;
    }
    
    return 0;
}
            
        
