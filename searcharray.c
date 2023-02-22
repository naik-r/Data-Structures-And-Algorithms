#include<stdio.h>
main() {
	 int a[100],n,i,found;
	 printf("enter the size of an array:");
	 scanf("%d",&n);
	 for(i=0;i<n;i++) {
	 	printf("a[%d]=",i);
	 	scanf("%d",&a[i]);
	 }
	 printf("the elements of an array is:");
	 for(i=0;i<n;i++) {
	 	printf("a[%d]=%d\n",i,a[i]);
	 }
	 printf("Enter the element you want to search:\n");
	 scanf("%d",&found);
	
	 for(i=0;i<n;i++) {
	 	if(a[i]==found) {
	 		printf("The element is found\n");
		 }
		 else 
		  printf("the element not found\n");
	 }
}
