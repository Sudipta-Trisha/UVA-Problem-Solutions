#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int sum(int n)
{
    int temp,rem=0;
    while(n>0){
        temp = n%10;
        rem = temp + rem;
        n = n/10;
    }
   return rem;
}

int main()
{
    ll n;
    while(cin>>n){
    if(n==0)
		break;
    ll a,b,c;
    a = sum(n);
    b = sum(a);
    c = sum(b);

    cout<<c<<endl;
   }
    
    return 0;
}
