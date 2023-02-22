#include<stdio.h>
#include<stdlib.h> 
struct node{
	int data;
	struct node *next;
}; 
struct node *head;

	void insert();
	void delete();
	void compute();
	void display();
	void reverse_display();
void main() {
    int choice =0;  
    while(choice != 6)   
    {  

        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");                                                                                                                                                                                                                                                                                              
        printf("\n===============================================\n");  
        printf("\n1.Insert\n2.delete\n3.compute\n4.display\n5.display in reverse\n6.exit\n");  
        printf("\nEnter your choice?\n");         
        scanf("\n%d",&choice);  
        switch(choice)  

        {  
            case 1: 
            insert();      
            break;  
            case 2: 
            delete();         
            break;  
            case 3:  
            compute();       
            break;  
            case 4:  
            display();       
            break;  
            case 5:  
            reverse_display();        
            break;  
            case 6:  
             exit(0);
			  break;  
            default:  
               printf("Please enter valid choice.."); 
		}
	}
}
	void insert() {
	struct node *ptr;  

    int item;  

    ptr = (struct node *) malloc(sizeof(struct node *));  

    if(ptr == NULL)  

    {  

        printf("\nOVERFLOW");  

    }  

    else  

    {  

        printf("\nEnter value\n");    

        scanf("%d",&item);    

        ptr->data = item;  

        ptr->next = head;  

        head = ptr;  

        printf("\nNode inserted");  
}
    }  
	void delete() {
	{  

    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++){ 
        ptr1 = ptr;       
        ptr = ptr->next;  
        if(ptr == NULL) {  
		 printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
} 
	}
	void compute() {
		 struct node *ptr;
		 int sum=0;  
    ptr = head;   
    if(ptr == NULL)  {  
    printf("0 members");  
	}  
    else {  
     printf("\ncounting values . . . . .\n");   
	 while (ptr!=NULL)  {  
	          ptr->data ; 
             ptr = ptr -> next;
			 sum++;  
			 }
			 printf("%d",sum);  
         }  

	}
	void display() {
		 struct node *ptr;  
          ptr = head;   
         if(ptr == NULL)   {  
           printf("Nothing to print");  
		    }  
          else   {  
           printf("\nprinting values . . . . .\n");   
            while (ptr!=NULL)   {  
            printf("\n%d",ptr->data);  
             ptr = ptr -> next;  
                       }  
                 }  
                 }
  void reverse_display() {
  	 struct node *ptr;
  	 ptr=NULL;
  	 printf("printing values:");
  	 while(ptr!=head) {
  	 	printf("\n%d",ptr->data);
  	 	ptr=ptr->next;
	   }
}


	

