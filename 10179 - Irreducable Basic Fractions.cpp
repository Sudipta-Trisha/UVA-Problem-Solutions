#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sz 1000000009

ll phi_func(ll n)
{
    ll node = n;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            node = node - (node/i);
        }
    }
    if(n>1){
        node = node - (node/n);
    }
    return node;
}

int main()
{
    ll n;
    while(scanf("%lld",&n) && n>0){
        if(n==1) printf("1\n");
        else printf("%lld\n",phi_func(n));
    }
    return 0;
}

