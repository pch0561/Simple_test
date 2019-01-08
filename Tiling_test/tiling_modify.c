#include <stdio.h>

void main(){
	//intialize test value
	int i,j,k,n,d;
	int x,y;
	n=10;
	d=1;
	int c[10][10],a[10][10],b[10][10];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			c[i][j]=1;
			a[i][j]=1;
			b[i][j]=1;
	
		}			
	//iteration 
	for(i=0;i<n;i+=d)
		for(j=0;j<n;j+=d)
			for(x=i;x<i+d&&x<n;x++)
				for(y=j;y<j+d&&y<n;y++)
					for(k=0;k<n;k++){
						printf("%d + %d * %d = ",c[x][y],a[x][k],b[k][y]);
						c[x][y]=c[x][k]+a[x][k]*b[k][y];
						printf("%d\n",c[x][y]);
					}
}
