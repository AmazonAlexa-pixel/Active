#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll mod=1e9+7;
ll n,m,f[2006][2006];
void getStirling(){
	for(ll i=0;i<=n;i++){
		f[i][i]=1;
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m&&j<=i;j++){
			f[i][j]=(f[i-1][j-1]+(i-1)*f[i-1][j])%mod;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	getStirling();
	cout<<f[n][m];
    return 0;
}

