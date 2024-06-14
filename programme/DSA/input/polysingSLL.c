#include<stdio.h> 
#include<stdlib.h> 
typedef struct node{
    int coeff,pow; 
    struct node *next;
}NODE;
NODE*create(); 
void display(NODE*); 
int main(){
    NODE *x,*y; 
    printf("Enter the 1st polynomial"); 
    x=create(); 
    printf("Display the 1st polynomial\n"); 
    display(x); 
    printf("\n"); return 0; 
}
NODE* create(){
    NODE *head=NULL ,*temp, *newnode; 
    int i, n, c,p; 
    printf("\n enter number of terms in polynomial="); 
    scanf("%d",&n); 
    for (i=1;i<=n;i++){
        printf("\nEnter coefficient and power of %d term=",i); 
        scanf("%d%d",&c,&p); 
        newnode=(NODE*)malloc(sizeof(NODE)); 
        newnode->coeff=c; 
        newnode->pow=p; 
        newnode->next=NULL; 
        if(head==NULL) head=newnode;
        else temp->next=newnode; 
    
    temp=newnode; 
    }
return (head); 
}
void display (NODE *temp){
    while(temp!=NULL){ 
        printf("%dx^%d+", temp->coeff,temp->pow); 
        temp=temp->next;
} 
printf("\n");
}