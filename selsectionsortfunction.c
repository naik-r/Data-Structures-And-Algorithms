#include<stdio.h>
 void selection_sort(int[], int);
 main() {
 	int a[100],n,i,j;
 	printf("ENTER THE SIZE OF AN ARRAY:");
 	scanf("%d",&n);
 	printf("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		printf("a[%d]= ",i);
 		scanf("%d",&a[i]);
	 }
	  selection_sort(a,n);
	  printf("THE ELMENTS AFTER INSERTIN  SORTING IS:\n");
	  for(i=0;i<n;i++) {
		printf("a[%d]=%d\n",i,a[i]);
	}

}
    void selection_sort(int a[], int n) {
    	int i,j,min,temp;
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
	}
