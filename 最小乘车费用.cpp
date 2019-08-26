#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1005],f[1005],n;
int main(){
	ios_base::sync_with_stdio(false);
	memset(f,0x7f,sizeof(f));
	for(int i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	cin>>n;
	f[0]=0;
	f[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		f[i]=f[i-1]+a[1];
		for(int j=1;j<=10&&j<=i;j++){
			f[i]=min(f[i],f[i-j]+a[j]);
		}
	}
	cout<<f[n]<<endl;
    return 0;
}

