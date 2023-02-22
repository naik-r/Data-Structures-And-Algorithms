#include<stdio.h>
main() {
	int n,sum=0,a[100],m,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
       while(a[i]!=0) {
	   
		m=a[i]%10;
		sum=sum+m;
		a[i]=a[i]/10;
		
}
	printf("%d\n",sum);
	
}

}
