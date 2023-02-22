#include<stdio.h>
 main() {
 	 int a[100],n,i;
 	 printf("enter the size of array:");
 	 scanf("%d",&n);
 	 printf("enter the elements:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	  printf(" the elements in revers order:\n");
	 	 for(i=n-1;i>=0;i--) { 
	 	 printf("a[%d]=%d\n",i,a[i]);
 }
}
