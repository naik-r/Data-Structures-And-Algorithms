#include<stdio.h>
 main() {
 	 int a[100],n,i,j,temp=0;
 	 printf("enter the size of array:");
 	 scanf("%d",&n);
 	 printf("Enter The Score Of Each Person:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	  printf("The Score Of Each Persons Are:\n");
		 for(i=0;i<n;i++) {
 	 	printf("a[%d]=%d\n",i,a[i]);
	  }
	  printf("\nThe LEADERBOARD Is:\n");
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
	  	printf("%d=%d\n",i+1,a[i]);
	  }	

}
