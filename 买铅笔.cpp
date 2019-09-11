#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,ans;
ll a,x,b,y,c,z;
ll aa,bb,cc,xx,yy,zz;
int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(false);
	cin>>n;
	cin>>a>>x;
	cin>>b>>y;
	cin>>c>>z;
	xx=x,yy=y,zz=z;
	for(aa=a;aa<n;aa+=a){
		xx+=x;
	}
	for(bb=b;bb<n;bb+=b){
		yy+=y;
	}
	for(cc=c;cc<n;cc+=c){
		zz+=z;
	}
//	cout<<xx<<" "<<yy<<" "<<zz<<endl;
	cout<<min(xx,min(yy,zz))<<endl;
	return 0;
}

