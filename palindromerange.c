#include<stdio.h>
main() {
	int r,reverse_num,i,s,e,temp;
	printf("enter the lower limit:");
	scanf("%d",&s);
	printf("ENTER THE UPPER LIMIT:");
	scanf("%d",&e);
	printf("palindrome between %d and %d are",s,e);
	for(i=s;i<e;i++){
		temp=i;
		reverse_num=0;
	while(temp) {
		r=temp%10;
		temp=temp/10;
		reverse_num=reverse_num*10+r;
	}
	if(i==reverse_num) 
	printf("%d\n",i);
}
}
