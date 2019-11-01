#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int mod(int n)
{
	int cnt_one=1;
	int remainder = 1%n;

	while(remainder > 0){
		cnt_one++;
		remainder = ((remainder*10)+1) % n;
	}

	return cnt_one;

}

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF){
		cout<<mod(n)<<endl;
	}
	return 0;
}
