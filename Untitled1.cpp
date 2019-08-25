#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans;
int Xpower(int a,int b,int c){
	int ans=1;
	a%=c;
	while(b>0){
		if(b&1)
		{
			ans=(ans*a)%c;
		}
		b=b>>1;
		a=(a*a)%c;
	}
	return ans;	
} 
int main(){
	ios_base::sync_with_stdio(false);
	cin>>a>>b>>c;
	ans=Xpower(a,b,c);
	cout<<ans<<endl;
    return 0;
}

