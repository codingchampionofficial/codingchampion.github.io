NODE* insert(NODE *head,int x,int p){
NODE *newnode,*temp=head; 
int i=1; 
while(i<p&&temp!=NULL){
    temp=temp->next; 
    i++; 
    }
if(temp!=NULL){
    newnode=(NODE*)malloc(sizeof(NODE)); 
    newnode->data=x; 
    newnode->next=newnode->prev=NULL; 
    if(p==0){
        newnode->next=temp; 
        temp->prev=newnode; 
        head=newnode; 
        }
else{
    newnode->next=temp->next; 
    temp->next->prev=newnode; 
    temp->next=newnode; 
    newnode->prev=temp; 
    }
}
return(head);
}