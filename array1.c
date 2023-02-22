#include<stdio.h>
 main() {
 	int a[5],i;
 	for(i=0;i<5;i++) {
 		printf("enter the a[%d]=",i);
 		scanf("%d",&a[i]);
	 }
	  printf("the elements are:\n");
		for(i=0;i<5;i++) {
 		printf(" a[%d]=%d\n",i,a[i]);
	 }
	 
 }
