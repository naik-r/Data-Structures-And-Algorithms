#include<stdio.h>
 main() {
 	int i,a[100],n,e,flag=0;
 	printf("Enter The Size Of An Array:");
 	scanf("%d",&n);
 	printf("Enter The ROLL NO.S of Students:\n");
 	    for(i=0;i<n;i++){  
 		printf("a[%d]=",i);
 		scanf("%d",&a[i]);
		 } 
	printf("The List Of ROLLNO.S are:\n");	 
	    for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("Whether A Particular Student Attended Training Or Not:\n");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i]==e) {
		    flag=1;
		    break;
		}
	}
	if(flag==1)
	printf("The %d ID Student is Attended For Training\n",a[i]);
    else
    printf("The %d ID Student is NOT Attended For Training\n",a[i]);
 }
