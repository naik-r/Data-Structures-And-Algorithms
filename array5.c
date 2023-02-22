#include<stdio.h>
main() {
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter the elements of array b:\n");
	    for(i=0;i<2;i++) {
		for(j=0;j<2;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		} 
	}
	 printf("elements of array a:\n");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d]=%d\n",i,j,a[i][j]);	
		} 
	}
	  printf("enter the elements of array b:\n");
		for(i=0;i<2;i++) {
		for(j=0;j<2;j++){
			printf("b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		} 
	}
	 printf("elements of array b:\n");
		for( i=0;i<2;i++) {
		for( j=0;j<2;j++){
			printf("b[%d][%d]=%d\n",i,j,b[i][j]);	
		} 
	}
	    for( i=0;i<2;i++) {
		for( j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];	
		} 
	}
	printf("the sum of 2 matrix is:\n");
	    for( i=0;i<2;i++) {
		for( j=0;j<2;j++){
			printf("c[%d][%d]=%d\n",i,j,c[i][j]);	
		} 
	}
}
