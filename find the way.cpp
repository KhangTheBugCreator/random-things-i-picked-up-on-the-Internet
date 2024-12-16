#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int dx[4]={-1,0,1,0};	
int dy[4]={0,1,0,-1};
int a[500][500],n,m;
void loang(int i,int j){

	a[i][j]=0;
	for (int k=0;k<4;k++){
		int i1=i+dx[k],j1=j+dy[k];
		if (i1<n && j1<m && i1>=0 && j1>=0 && a[i1][j1]==1){
			loang(i1,j1);
		}
	}
}

int main(){
	int s,t,u,v;
	scanf("%d%d",&n,&m);
	scanf("%d%d%d%d",&s,&t,&u,&v);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	u--;v--;t--;s--;
	loang(s,t);
	if (a[u][v]!=0) printf("NO");
	else printf("YES");
	return 0;
}

