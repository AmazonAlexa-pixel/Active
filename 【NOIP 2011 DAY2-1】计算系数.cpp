#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll a,b,k,n,m;
ll f[1111][1111];
int main(){
	ios_base::sync_with_stdio(false);
	cin>>a>>b>>k>>n>>m;
	f[0][0]=1;
	for(int i=0;i<=n;i++){
	 	for(int j=0;j<=m;j++){
	 		if(i==0 and j==0)
	 		{
	 			continue;
			}
            f[i][j]=0;
            if (i>0){
            	f[i][j]+=f[i-1][j]*a;
				f[i][j]=f[i][j]%10007;
			}
            if (j>0){
            	f[i][j]+=f[i][j-1]*b;
				f[i][j]=f[i][j]%10007;
			}   
		}
	}
	cout<<f[n][m]<<endl;
    return 0;
}

