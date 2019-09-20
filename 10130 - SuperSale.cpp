#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int capacity, int profit[], int weight[])
{
	int mat[n+1][capacity+1];
	for(int i=0; i<=n; i++){
		for(int j=0; j<=capacity; j++){
			if(i==0 || j==0){
				mat[i][j] = 0;
			}
			else if(weight[i-1]<=j){
				mat[i][j] = max(profit[i-1] + mat[i-1][j-weight[i-1]], mat[i-1][j]);
			}
			else{
				mat[i][j] = mat[i-1][j];
			}
		}
	}
	return mat[n][capacity];

}

int main()
{
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		
		int profit[n],weight[n];
		for(int i=0; i<n; i++){
			cin>>profit[i]>>weight[i];
		}
		
		int G, total=0;
		cin>>G;
		while(G--){
			int mw;
			cin>>mw;
			total = total + knapsack(n,mw,profit,weight);
		}
		
		cout<<total<<endl;
	}
			
	return 0;
}

