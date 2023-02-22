#include<stdio.h>
 void bubble_sort(int[], int);
 main() {
 	int a[100],n,i,j;
 	printf("ENTER THE SIZE OF AN ARRAY:");
 	scanf("%d",&n);
 	printf("ENTER THE ELEMENTS OF AN ARRAY\n");
 	for(i=0;i<n;i++) {
 		printf("a[%d]= ",i);
 		scanf("%d",&a[i]);
	 }
	  bubble_sort(a,n);
	  printf("THE ELMENTS AFTER BUBBLE SORTING IS:");
	  for(i=0;i<n;i++) {
		printf("%d\t",a[i]);
	}

}
    void bubble_sort(int a[], int n) {
    	int i,j,temp;
	
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-1-i;j++) {
			if(a[j]>a[j+1]) {
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
}
