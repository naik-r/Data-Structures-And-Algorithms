#include<stdio.h>
 main() {
 	int a[100],n,i,j,temp,min;
 	printf("ENTER THE SIZE OF AN ARRAY:");
 	scanf("%d",&n);
 	printf("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		printf("a[%d]= ",i);
 		scanf("%d",&a[i]);
	 }
	for(i=0;i<n-1;i++) {
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
}
printf("THE ELEMNETS AFTER SELECTION SORTING:\n");
for(i=0;i<n;i++) {
 		printf("a[%d]=%d\n",i,a[i]);
 }
	 }
	
