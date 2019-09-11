#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int n,k,x,y;
int matrix[55][55];
int main(){
//	freopen("magic.in","r",stdin);
//	freopen("magic.out","w",stdout);
	ios_base::sync_with_stdio(false);
	cin>>n;
	k=n/2;
	matrix[1][k+1]=1;
	x=1;
	y=k+1;
	for(int i=2;i<=n*n;i++)
	{
		 if(x==1 && y!=n){
            matrix[n][y+1]=i;
            x=n;
            y=y+1;
        }
        else if(x!=1 && y==n){
            matrix[x-1][1]=i;
            x=x-1;
            y=1;
        }
        else if(x==1 && y==n){
            matrix[x+1][y]=i;
            x=x+1;
            y=y;
        }
        else if(x!=1 && y!=n){
            if(matrix[x-1][y+1]==0){
                matrix[x-1][y+1]=i;
                x=x-1;
                y=y+1;
            }
            else{
                matrix[x+1][y]=i;
                x=x+1;
                y=y;
            }
        }
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

