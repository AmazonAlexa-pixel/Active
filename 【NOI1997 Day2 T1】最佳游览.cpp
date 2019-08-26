#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int p[105][20005],a[20005],f[20005],n,m;
int main() {
	ios_base::sync_with_stdio(false);
	cin>>m>>n;
	for(int i=1; i<=n+5; i++) {
		f[i]-=105;
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n-1; j++) {
			cin>>p[i][j];
		}
	}
	for(int i=1; i<n; i++) {
		a[i]=p[1][i];
		for(int j=1; j<=m; j++) {
			a[i]=max(p[j][i],a[i]);
		}
	}
	for(int i=1; i<n; i++) {
		if(f[i-1]<0) {
			f[i]=a[i];
		} else {
			f[i]=a[i]+f[i-1];
		}
	}
	int t=-105;
	for(int i=1; i<n; i++) {
		t=max(t,f[i]);
	}
	cout<<t<<endl;
	return 0;
}

