#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int x[205],y[205],z[205],f[205][205][205];
int main() {
	ios_base::sync_with_stdio(false);
	cin>>a>>b>>c;
	for(int i=1; i<=a; i++) {
		cin>>x[i];
	}
	for(int i=1; i<=b; i++) {
		cin>>y[i];
	}
	for(int i=1; i<=c; i++) {
		cin>>z[i];
	}
	for(int i=1; i<=a; i++) {
		for(int j=1; j<=b; j++) {
			for(int k=1; k<=c; k++) {
				if(x[i] == y[j] && y[j] == z[k]) {
					f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
				} 
				else {
					f[i][j][k] = max(f[i - 1][j][k], max(f[i][j - 1][k], f[i][j][k - 1]));
				}
			}
		}
	}
	cout<<f[a][b][c];
	return 0;
}

