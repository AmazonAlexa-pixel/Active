#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int lenX,lenY,x[555],y[555],f[555][555],i,j;
int main() {
	ios_base::sync_with_stdio(false);
	cin>>lenX>>lenY;
	for(i=1; i<=lenX; i++)cin>>x[i];
	for(j=1; j<=lenY; j++)cin>>y[j];
	for(i=0; i<=554; i++) {
		f[i][0]=0;    
		f[0][i]=0;
	}
	for(i=1;i<=lenX;i++){
		for(j=1;j<=lenY;j++){
			if(x[i]==y[j]){
				f[i][j]=f[i-1][j-1]+1;
			}
			else{
				if(f[i-1][j]>f[i][j-1])f[i][j]=f[i-1][j];
				else f[i][j]=f[i][j-1];
			}
		}
	} 
	cout<<f[lenX][lenY];
	return 0;
}

