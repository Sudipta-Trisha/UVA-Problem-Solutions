#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool arr[10000009];
vector<ll>v;

void sieve()
{
   arr[0] = 1;
   arr[1] = 1;

   for(ll i=2; i<=10000000; i++){
    if(arr[i]==0 && i*i<=10000000)
    {
        v.push_back(i);
        for(ll j=i*i; j<=10000000; j+=i){
            arr[j]= 1;
        }
    }
   }
}

int main()
{
    sieve();
    ll n,temp,flag=0;
    while(cin>>n){
    if(n==0){
		break;
	}
    for(ll j=0; v[j]<n ; j++){
                temp = n-v[j];
                if(arr[temp]==0) {
					cout<<n<<" "<<"="<<" "<<v[j]<<" + "<<n-v[j]<<endl;
					flag = 1;
					break;                
            }
        }
    }
    return 0;
}
