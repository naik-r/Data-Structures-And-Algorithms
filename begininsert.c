#include<stdio.h>  

#include<stdlib.h>  

struct node   

{  

    int data;  

    struct node *next;   

};  

struct node *head;  

void main() {
void beginsert ();
void display();
}
void beginsert()  

{  

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
void display()  

{  

    struct node *ptr;  

    ptr = head;   

    if(ptr == NULL)  

    {  

        printf("Nothing to print");  

    }  

    else  

    {  

        printf("\nprinting values . . . . .\n");   

        while (ptr!=NULL)  

        {  

            printf("\n%d",ptr->data);  

            ptr = ptr -> next;  

        }  

    }  

} 

