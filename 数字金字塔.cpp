#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int f[1005][1005],a[1005][1005],n;
int main() {
	ios_base::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++) {
			cin>>a[i][j];
		}
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=1000;j++) {
			f[i][j]=0;
		}
	}	
	for(int i=n; i>=1; i--){
		for(int j=1; j<=i; j++){
			f[i][j]=a[i][j]+max(f[i+1][j],f[i+1][j+1]);
		}	
	}
	cout<<f[1][1];
	return 0;
}

