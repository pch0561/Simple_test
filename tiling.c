#include <stdio.h>

void main(){
	//intialize test value
	int i,j,k,n;
	n=10;
	int c[10][10],a[10][10],b[10][10];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			c[i][j]=1;
			a[i][j]=1;
			b[i][j]=1;
	
		}			
	//iteration
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++){
				printf("%d + %d * %d = ",c[i][j],a[i][k],b[k][j]);
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				printf("%d\n",c[i][j]);
			}
}
