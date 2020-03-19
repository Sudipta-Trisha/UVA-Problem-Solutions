#include<bits/stdc++.h>
using namespace std;

int arr[2000006];

int main()
{
  //ios_base::sync_with_stdio(0);
  
  int n;
  while(cin>>n && n)
  {
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    
    sort(arr,arr+n);
    
    for(int i=0; i<n-1; i++){
      cout<<arr[i]<<" ";
    }
    cout<<arr[n-1];
    cout<<endl;
  }
  
  return 0;
}
