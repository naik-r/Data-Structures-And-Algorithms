#include<stdio.h>
main() {
	int a[100],i,j,n,x;
	printf("ENTER THE SIZE OF AN ARRAY:");
 	scanf("%d",&n);
 	printf("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		printf("a[%d]= ",i);
 		scanf("%d",&a[i]);
	 }
	printf("THE ELMENTS AFTER INSERTION SORTING IS:");
	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
	while(j>=0&&a[j]>x){
		a[j+1]=a[j];
		j--;
	}a[j+1]=x;
}
 	for(i=0;i<n;i++) {
 		printf("%d\t",a[i]);
}
}
