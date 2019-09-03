#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void height()
{
    ll n;
    cin>>n;
    vector<ll>chimps(n);
    for(int i=0; i<n; i++)
    {
        cin>>chimps[i];
    }
    
    ll q;
    cin>>q;
    vector<ll>luchu(q);
    for(int i=0; i<q; i++)
    {
        cin>>luchu[i];
    }
    
    for(int i=0; i<q; i++){
        
        ll lower = lower_bound(chimps.begin(),chimps.end(),luchu[i])-chimps.begin()-1;
        ll upper = upper_bound(chimps.begin(),chimps.end(),luchu[i])-chimps.begin();
        
        if(lower>0 && upper>=n)
        {
            cout<<chimps[lower]<<" "<<"X"<<endl;
        }
        else if(lower<0 && upper>=0 && upper<n)
        {
            cout<<"X"<<" "<<chimps[upper]<<endl;
        }
        else if(lower>=0 && lower<n && upper>=0 && upper<n)
        {
            cout<<chimps[lower]<<" "<<chimps[upper]<<endl;
        }
        else
        {
            cout<<"X"<<" "<<"X"<<endl;
        }
    }
}
int main()
{
    height();
    return 0;
}
