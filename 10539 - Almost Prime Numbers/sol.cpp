
/**
 *    author        : Sudipta Banik Trisha 
 *    created       : July 14, 2020 12:14 AM
 *    Problem Name  : 10539 - Almost Prime Numbers
 *    Problem Limit : 3000 ms , 32 MB
 *    Problem Url   : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1480
**/
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 10000000

vector<ll>v;
vector<ll>non_p;
bool arr[10000000+10];
void sieve()
{
  v.push_back(2);
  for(ll i=4; i<=sz; i+=2 )
    arr[i]=1;
  for(ll i=3; i<=sz; i+=2){
      if(!arr[i]){
        v.push_back(i);
        if(i*i<=sz){
          for(ll j=i*i; j<=sz; j+=i+i){
            arr[j]=1;
          }
        }
      }
      
    }
}

void almost()
{
    for(ll i=2; i<sz; i++){
        if(!arr[i]){
            for(ll j=i*i; j<1000000000002; j*=i){
                non_p.push_back(j);
            }
        }
    }

    sort(non_p.begin(), non_p.end());
}

int main()
{
    sieve();
    almost();
    ll test;
    cin >> test;
    while(test--){
        ll left,right;
        cin >> left >> right;

        ll cnt=0;
        for(ll i=0; i<non_p.size() && non_p[i]<=right; i++){
            if(non_p[i] >= left)
                cnt++;
        }

        cout << cnt << endl;
    }
    return 0;
}


