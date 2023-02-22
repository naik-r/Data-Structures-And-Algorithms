#include<stdio.h>
main() {
	int reverse=0,a[100],n,remainder,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
  while(a[i]!= 0) {
    remainder = a[i] % 10;
    reverse = reverse * 10 + remainder;
    a[i] /= 10;
  }

	printf("%d\n",reverse);
	
}


}
