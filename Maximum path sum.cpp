#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define ll long long
ll res[200][200];
int a[200][200];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			res[i][j]=a[i][j];
			if (i==0 && j==0){
				res[i][j]=a[i][j];
			}
			else if(i==0){
				res[i][j]+=res[i][j-1];
			}
			else if (j==0){
				res[i][j]+=res[i-1][j];
			}else{
				res[i][j]+=(ll)fmax(res[i-1][j],res[i][j-1]);
			}
		}
	}
	printf("%lld",res[n-1][m-1]);
	return 0;
}
	

