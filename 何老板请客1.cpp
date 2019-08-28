#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
#define sn for(int i=1;i<=n;i++)
#define sm for(int j=2;j<=m && j<=i;j++)
using namespace std;
const ll fuck=1e9+7;
ll n,m,f[2222][2222];
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	sn{
		f[i][1]=1;
	}
	sn{
		sm{
			f[i][j]=(f[i-1][j-1]+j*f[i-1][j])%fuck;
//			f[i][j]=;
		}
	}
	cout<<f[n][m]<<endl;
    return 0;
}
