NODE* insert(NODE *head1,int x,int p) {
NODE *newnode,*temp=head1; int i=1;
while(i<p&&temp!=NULL){
    temp=temp->next; 
    i++; 
    }
if(temp!=NULL){
newnode=(NODE*)malloc(sizeof(NODE)); 
newnode->data=x; 
if(p==0){
newnode->next=head1; 
head1=newnode;
 }
else{
newnode->next=temp->next; 
temp->next=newnode; 
}
}
return(head1);
}