#include<bits/stdc++.h>
#define  ll long long int
using namespace std;

ll ans;

void egcd(ll a, ll b,ll& x, ll& y)
{
    if(b==0){
        x = 1;
        y = 0;
        ans =  a;
        return ;
    }
    ll x1, y1;
    egcd(b,a%b,x1,y1);

    x = y1;
    y = x1 - y1*(a/b);

//    x = x1;
//    y = y1;
}

int main()
{
    ll a,b,x,y;
    while(scanf("%lld%lld",&a,&b)==2){
    if(a==0)
        swap(a,b);
    egcd(a,b,x,y);
    cout<<x<<" "<<y<<" "<<ans<<endl;
    }
    return 0;
}

