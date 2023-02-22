#include<stdio.h>
 main() {
 	 int a[100],n,i,j,temp=0;
 	 printf("enter the array size:");
 	 scanf("%d",&n);
 	 printf("enter the array  elements:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]= ",i);
 	 	scanf("%d",&a[i]);
	  }
	  printf("the array elements:\n");
		 for(i=0;i<n;i++) {
 	 	printf("a[%d]=%d\t",i,a[i]);
	  }
	  printf("\nAfter bubble Sorting the elements in an array:\n");
	  for(i=0;i<n-1;i++) {
	  	for(j=0;j<n-1-i;j++) {
	  		if(a[j]>a[j+1]) {
	  		temp=a[j];
	  		a[j]=a[j+1];
	  		a[j+1]=temp;
		  }
	}
	  }
	  for(i=0;i<n;i++) {
	  	printf("a[%d]=%d \t",i,a[i]);
	  }	
}
