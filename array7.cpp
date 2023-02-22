#include<stdio.h>
 main() {
 	 int a[100],b[100],n,i;
 	 printf("enter the size of array:");
 	 scanf("%d",&n);
 	 printf("enter the elements of a:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	 for(i=0;i<n;i++) {
	 	b[i]=a[i];
	 } 
	 printf("elements of b are:\n");
     for(i=0;i<n;i++) {
 	 	printf("b[%d]=%d\n",i,b[i]);
 }
}

