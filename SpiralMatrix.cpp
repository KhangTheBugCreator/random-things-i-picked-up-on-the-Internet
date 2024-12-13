#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int dem=1,h1=0,h2=n-1,c1=0,c2=n-1;
	int a[n][n];
	while (dem<=n*n){
		//xay dung canh tren cung; hang h1; chay tu c1->c2;
		for (int i=c1;i<=c2;i++){
			a[h1][i]=dem++;
		}
		h1++;
		//xay dung canh ben phai; cot c2; chay tu h1->h2;
		for (int i=h1;i<=h2;i++){
			a[i][c2]=dem++;
		}
		c2--;
		//xay dung canh duoi; hang h2; chay tu c2->c1;
		for (int i=c2;i>=c1;i--){
			a[h2][i]=dem++;
		}
		h2--;
		//xay dung canh trai; cot c1; chay tu h2 ->h1;
		for (int i=h2;i>=h1;i--){
			a[i][c1]=dem++;
		}
		c1++;
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
