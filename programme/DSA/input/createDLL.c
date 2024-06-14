NODE* create(){
    NODE *head=NULL,*temp,*newnode; 
    int i, n, x; 
    printf("Enter no of nodes="); 
    scanf("%d",&n);
for (i=1;i<=n;i++){ 
    printf("Enter data="); 
    scanf("%d",&x);
    newnode=(struct node*)malloc(sizeof(struct node)); 
    newnode->data=x; 
    newnode->next=newnode->prev=NULL; 
    if(head==NULL) {
        head=newnode;}

    else{
        temp->next=newnode; 
        newnode->prev=temp;
} 
temp=newnode; 
}
return (head);
}