#include<stdio.h>
main() {
	 int a[100],n,i;
	 printf("enter the size of an array:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++) {
	 	printf("a[%d]=",i);
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i+=2) {
	 	printf("a[%d]=%d",i,a[i]);
	 }
}
