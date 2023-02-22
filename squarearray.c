#include<stdio.h>
main() {
	 int a[100],n,i;
	 printf("enter the size of an array:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++) {
	 	printf("a[%d]=",i);
	 	scanf("%d",&a[i]);
	 }
	 printf("the square of an array is:")
	 for(i=0;i<n;i++) {
	 	printf("a[%d]=%d\n",i,a[i]*a[i]);
	 }
}
