#include<stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[100000]={0};
bool judge(int x){
	int s=0,y=1;
	for(int i=1;i<=n;i++){
		if(x<a[i]){
			return false;
		} 
		if(s+a[i]>x){
			y++;
			s=0;
		}
		s+=a[i];
	}
	if(y>m) return false;
	return true;
}
 
int main(){	
	ios_base::sync_with_stdio(false);
	cin>>n>>m;
	//memset(a,0,sizeof(a));
	int s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
	int l=s/m,r=s,mid;
	while(l+1<r){
		mid=(l+r)/2;
		if(judge(mid)){
			r=mid;
		}
		else{
			l=mid;
		}
	}
	cout<<r; 
	return 0;
} 


