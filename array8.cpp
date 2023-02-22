#include<stdio.h>
 main() {
 	 int a[100],n,i,j,temp=0;
 	 printf("enter the size of array:");
 	 scanf("%d",&n);
 	 printf("enter the elements:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	  printf("the elements:\n");
		 for(i=0;i<n;i++) {
 	 	printf("a[%d]=%d",i,a[i]);
	  }
	  printf("elements in descending order:\n");
	  for(i=0;i<n;i++) {
	  	for(j=0;j<i;j++) {
	  		if(a[i]>a[j]) {
	  		temp=a[i];
	  		a[i]=a[j];
	  		a[j]=temp;
		  }
	}
	  }
	  for(i=0;i<n;i++) {
	  	printf("%d ",a[i]);
	  }	
	 printf("elements in ascending order:\n");  
	 for(i=n-1;i>=0;i--) {
	 	printf("%d ",a[i]);
	 }
}
