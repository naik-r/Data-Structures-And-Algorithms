#include<stdio.h>
 main() {
 	int i,a[100],n,e,flag=0;
 	printf("Enter The Size Of An Array:");
 	scanf("%d",&n);
 	printf("Enter The PHONE NO.s of Students:\n");
 	    for(i=0;i<n;i++){  
 		printf("a[%d]=",i);
 		scanf("%d",&a[i]);
		 } 
	printf("The List Of PHONE NO.s In Contacts Are:\n");	 
	    for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Whether A Particular PHONE NO.s is There Or NOT:\n");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i]==e) {
		    flag=1;
		    break;
		}
	}
	if(flag==1)
	printf("The %d PHONE NO Is There In Contacts",a[i]);
    else
    printf("The %d PHONE NO Is Not There In Contacts",a[i]);
 }
