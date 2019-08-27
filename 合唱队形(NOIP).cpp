#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a[105],f[105][2],ans;
int main(){
	ios_base::sync_with_stdio(false);
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    a[0]=0; 
    for(int i=1;i<=n;i++){
         for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                f[i][0]=max(f[i][0],f[j][0]+1);
             }
         }
    } 
    a[n+1]=0;
    for(int i=n;i;i--){
        for(int j=n+1;j>i;j--){
            if(a[i]>a[j]){
                f[i][1]=max(f[i][1],f[j][1]+1);
            }
        }
    } 
    for(int i=1;i<=n;i++) {
        ans=max(f[i][0]+f[i][1]-1,ans);
    }    
    cout<<n-ans<<endl; 
	return 0;
}

