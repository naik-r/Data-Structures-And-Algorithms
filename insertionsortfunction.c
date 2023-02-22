#include<stdio.h>
 void insertion_sort(int[], int);
 main() {
 	int a[100],n,i,j;
 	printf("ENTER THE SIZE OF AN ARRAY:");
 	scanf("%d",&n);
 	printf("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		printf("a[%d]= ",i);
 		scanf("%d",&a[i]);
	 }
	  insertion_sort(a,n);
	  printf("THE ELMENTS AFTER INSERTIN  SORTING IS:");
	  for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}

}
    void insertion_sort(int a[], int n) {
    	int i,j,x;
    	for(i=1;i<n;i++){
		x=a[i];
		j=i-1;
	while(j>=0&&a[j]>x){
		a[j+1]=a[j];
		j--;
	}a[j+1]=x;
}
		}

