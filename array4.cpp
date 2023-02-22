#include<stdio.h>
 main() {
 	 int a[100],n,i,even=0,odd=0;
 	 printf("enter the size of array:");
 	 scanf("%d",&n);
 	 printf("enter the elements:\n");
 	 for(i=0;i<n;i++) {
 	 	printf("a[%d]=",i);
 	 	scanf("%d",&a[i]);
	  }
	 for(i=0;i<n;i++) {
	 	if(a[i]%2==0) 
	 		even=even+a[i];
		 else
		    odd=odd+a[i];
	 } 
	 printf("the sum of even numders are:%d\n",even);
	 printf("the sum of odd numders are:%d",odd);
}
