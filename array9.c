#include<stdio.h>
int main() {
	int a[100],i,n,min,max;
	printf("enter the size of an array: \n");
	scanf("%d",&n);
	printf("enter the elements of an array: \n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max)
		    max=a[i];
		else if (a[i]<min)
		    min=a[i];	
	}
  printf("the maximun is %d\n",max);
  printf("the minimun is %d\n",min); 	
	
}
