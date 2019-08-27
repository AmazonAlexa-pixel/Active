#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lx,ly,x[555],y[555],dp[555][555];
int main(){
	ios_base::sync_with_stdio(false);
	cin>>lx>>ly;
	for(int i=1;i<=lx;i++){
		cin>>x[i];
	}
	for(int j=1;j<=ly;j++){
		cin>>y[j];
	}
	for(int i=0;i<=554;i++){
			dp[i][0]=0;
			dp[0][i]=0;
	}
	for(int i=1;i<=lx;i++){
		for(int j=1;j<=ly;j++){
			if(x[i]==y[j]){
				dp[i][j]==dp[i-1][j-1]+1;
			}
			else{
				if(dp[i-1][j]>dp[i][j-1]){
					dp[i][j]=dp[i-1][j];
				}
			} else{
				dp[i][j]=dp[i][j-1];
			}
			
		}
	}
/*	for(int i=1;i<=lx;i++){
		for(int j=1;j<=ly;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[lx][ly]<<endl;
	return 0;
}

