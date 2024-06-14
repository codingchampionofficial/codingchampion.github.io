NODE* create(){
NODE *head,*temp,*newnode; 
int i,n,x; 
head=NULL; 
printf("\nEnter How Many No.s="); 
scanf("%d",&n); 
for(i=1;i<=n;i++) {
printf("\nEnter Data:"); 
scanf("%d",&x); 
newnode=(NODE*)malloc(sizeof(NODE)); 
newnode->data=x; 
newnode->next=NULL; 
if(head==NULL) {
    head=newnode;
}
else{
temp->next=newnode; 
}
temp=newnode; 
} 
return(head);
}