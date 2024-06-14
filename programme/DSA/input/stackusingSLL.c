#include<stdio.h> 
#include<stdlib.h>
#include<conio.h> 
#include<string.h> 
typedef struct node{
    int data; 
    struct node *next; 
    }NODE; 
NODE *top=NULL;

void push(int);
void pop(); 
int main(){
    int choice,x; 
    while(1){
        printf("\n1.Push\t2.Pop\t0.Exit"); 
        printf("\nEnter choice="); 
        scanf("%d",&choice); 
    switch(choice){
         case 1:printf("Enter Data="); 
         scanf("%d",&x); 
         push(x); 
         break;
         
         case 2:
         pop(); 
         break;

         case 0:
         return 0;
         
default:
printf("ERROR.>>");

 }
}
}
void push(int x){
    NODE *ptr; 
    ptr=(NODE*)malloc(sizeof(NODE)); 
    
    if(ptr==NULL) 
    printf("Insuffucient Memory"); 
    else{
        ptr->data=x; 
        ptr->next=top; 
        top=ptr;
        }
} 

void pop(){
    NODE *temp; 
    int x; 
    temp=top; 
    if(temp==NULL) 
        printf("Stack is Empty"); 
    else{
        x=temp->data; 
        top=top->next; 
        free(temp); 
        printf("%d",x);
        }
}